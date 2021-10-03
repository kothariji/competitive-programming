
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "X1z-Gg9FeXz6c1P3LPGJQhSS9_8lLTZk";

char ssid[] = "thisone1";
char pass[] = "12345678";

int a;
void setup() {
   
  Blynk.begin(auth, ssid, pass);
  Serial.begin(9600);
  while (!Serial) {
    ; 
  }
  
}

void loop() {
  WidgetLED led1(V1);

  if (Serial.available()) {
     a =Serial.parseInt();
     Blynk.run();
     led1.on();
     delay(1000);
     
  }
  else
  {
    led1.on();
    }
 }