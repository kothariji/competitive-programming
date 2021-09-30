
#include <Arduino_FreeRTOS.h>
#include <Stepper.h>
#include <queue.h>
#include <semphr.h> 
 

  const int stepsPerRevolution = 2048;
   
    Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void TaskBlink( void *pvParameters );
void TaskAnalogRead( void *pvParameters );
QueueHandle_t integerQueue;
SemaphoreHandle_t xSerialSemaphore;
int val1=0;
          
void setup() {
  
 
  Serial.begin(9600);
    
  while (!Serial) {
    
  }
  integerQueue = xQueueCreate(10, // Queue length
                              sizeof(int) // Queue item size
                              );
                              
 if ( xSerialSemaphore == NULL )  // Check to confirm that the Serial Semaphore has not already been created.
  {
    xSerialSemaphore = xSemaphoreCreateMutex();  // Create a mutex semaphore we will use to manage the Serial Port
    if ( ( xSerialSemaphore ) != NULL )
      xSemaphoreGive( ( xSerialSemaphore ) );  // Make the Serial Port available for use, by "Giving" the Semaphore.
  }
  if (integerQueue != NULL) {
    
    // Create task that consumes the queue if it was created.
    xTaskCreate(TaskSerial, // Task function
                "Serial", // A name just for humans
                128,  // This stack size can be checked & adjusted by reading the Stack Highwater
                NULL, 
                1, // Priority, with 3 (configMAX_PRIORITIES - 1) being the highest, and 0 being the lowest.
                NULL);


    // Create task that publish data in the queue if it was created.
    xTaskCreate(TaskAnalogRead, // Task function
                "AnalogRead", // Task name
                128,  // Stack size
                NULL, 
                1, // Priority
                NULL);
                xTaskCreate(
    TaskEmergency
    ,  "Emergency"   // A name just for humans
    ,  128  // This stack size can be checked & adjusted by reading the Stack Highwater
    ,  NULL
    ,  3  // Priority, with 3 (configMAX_PRIORITIES - 1) being the highest, and 0 being the lowest.
    ,  NULL );
    xTaskCreate(
    TaskDoor
    ,  "Door"   // A name just for humans
    ,  128  // This stack size can be checked & adjusted by reading the Stack Highwater
    ,  NULL
    ,  2  // Priority, with 3 (configMAX_PRIORITIES - 1) being the highest, and 0 being the lowest.
    ,  NULL );
    
  }
  
  


  
}

void loop()
{
  
}

/*--------------------------------------------------*/
/*---------------------- Tasks ---------------------*/
/*--------------------------------------------------*/

void TaskEmergency(void *pvParameters)  // This is a task.
{
  (void) pvParameters;


  pinMode(3, INPUT);
  int a=0;
  int val2;
  for (;;) // A Task shall never return or exit.
  {
    a=digitalRead(3);   
    if(a==1)
    {
      
      
      Serial.write(a);
      vTaskDelay( 500 / portTICK_PERIOD_MS );
      val2 = 0;
    xQueueSend(integerQueue, &val2, portMAX_DELAY);
       vTaskDelay(1);

      
    
      }
      
    
  }
}
void TaskDoor(void *pvParameters)  // This is a task.
{
  (void) pvParameters;


  pinMode(4, INPUT);
  int b=0;
  int val3;
  for (;;) // A Task shall never return or exit.
  {
    b=digitalRead(3);   
    if(b==1)
    {
      
      
     
      vTaskDelay( 500 / portTICK_PERIOD_MS );
      val3 = -1;
    xQueueSend(integerQueue, &val3, portMAX_DELAY);
       vTaskDelay(1);

      
    
      }
      
    
  }
}

void TaskAnalogRead(void *pvParameters)  // This is a task.
{
  (void) pvParameters;
  

 myStepper.setSpeed(15);
int valueFromQueue = 0;
int val;
int flag=0;
  for (;;)
  {
    if (xQueueReceive(integerQueue, &valueFromQueue, portMAX_DELAY) == pdPASS) {
     
      
        val=valueFromQueue;
    

      
    }
    
    if (val==1) //first floor
    {
    if (flag==2)
    {
    myStepper.step(-val*2000);
    
      delay(1000);
      
    }
    else if (flag==0)
    {
    myStepper.step(val*2000);
    
      delay(1000);
      
    }
    flag=1;
    }
    else if (val==2) // second floor
    {
    
   if (flag==0)
    {
    myStepper.step(val*2000);
    
      delay(1000);
      
    }
    else if (flag==1)
    {
    myStepper.step(flag*2000);
    
      delay(1000);
      
    }
    flag=2;
      
    }
     else if (val==0) //ground floor
    {
   
   if (flag==1)
    {
    myStepper.step(-flag*2000);
    
      delay(1000);
      
    }
   else if (flag==2)
    {
    myStepper.step(-flag*2000);
    
      delay(1000);
      
    }flag=0;
      
    }
    else if(val==-1)
    {
      Serial.println("Close the door!");
      }
    else
    {
      Serial.println("Floor does'nt Exist!");
      }
    
     
}

  }
  void TaskSerial(void * pvParameters) {
  (void) pvParameters;


  for (;;) 
  {

     while (Serial.available() == 0);
   val1 = Serial.parseInt();
    xQueueSend(integerQueue, &val1, portMAX_DELAY);
   
    
   

    // One tick delay (15ms) in between reads for stability
    vTaskDelay(1);
    
  
  

  }
}