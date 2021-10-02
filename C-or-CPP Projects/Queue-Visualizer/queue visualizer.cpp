#include<stdio.h>
#include<graphics.h>
struct q//structure
{
    int capacity;
    int fronts;
    int rear;
    int *arr;
    int *x1,*x2,*y1,*y2;
GetCursor();
};
void rear_front(struct q *arrays)
{ setcolor(WHITE);

setcolor(BLACK);
outtextxy(80+((arrays->rear-1)*80),250,"rear");
    outtextxy(80+((arrays->fronts-1)*80),70,"front");
setcolor(WHITE);
    outtextxy(80+(arrays->rear*80),250,"rear");
    outtextxy(80+(arrays->fronts*80),70,"front");
  setcolor(YELLOW);
}
void index(void)
{ int i,j=-1;
char str[3];
    for(i=0;i<=400;i=i+80)
    {
        sprintf(str,"%d",j);
        settextstyle(3,0,3);
        setcolor(YELLOW);
        outtextxy(20+i,220,str);
        j++;
    }
    setcolor(BLACK);
}
void make_container(void)//make to base for the queue visualizer
{ setlinestyle(0,2,4);
    setcolor(BLUE);
    line(50,100,500,100);
    line(50,200,500,200);

}
struct q* create_array(int cap)//creating q
{
    struct q *arrays;
    arrays=(struct q*)malloc(sizeof(struct q));
    arrays->capacity=cap;
    arrays->fronts=-1;
    arrays->rear=-1;
    arrays->arr=(int*)malloc(sizeof(int)*cap);
    arrays->x1=(int*)malloc(sizeof(int)*cap);
    arrays->x2=(int*)malloc(sizeof(int)*cap);
    arrays->y1=(int*)malloc(sizeof(int)*cap);
    arrays->y2=(int*)malloc(sizeof(int)*cap);
    return(arrays);
}
int isfull(struct q *arrays)//function to check queue is full or not
{
    if(arrays->rear==arrays->capacity-1&&arrays->fronts==0||arrays->rear+1==arrays->fronts){
	 outtextxy(50,290,"queue is full");
	 delay(600);
	 setcolor(BLACK);
	 outtextxy(50,290,"queue is full");
	 setcolor(YELLOW);
	 return(1);
    }
    else
        return(0);
}
void insertion(struct q *arrays,int item,int x1,int y1,int x2,int y2)//to store all axis and data
{

	if(arrays->rear==-1)
	{
	    arrays->rear++;
	    arrays->arr[arrays->rear]=item;
	    arrays->x1[arrays->rear]=x1;
	    arrays->x2[arrays->rear]=x2;
	    arrays->y1[arrays->rear]=y1;
	    arrays->y2[arrays->rear]=y2;
	    arrays->fronts=arrays->rear;
	}
	else if(arrays->rear==arrays->capacity-1&&arrays->fronts!=0)
	{
	    arrays->rear=0;
	    arrays->arr[arrays->rear]=item;
	    arrays->x1[arrays->rear]=x1;
	    arrays->x2[arrays->rear]=x2;
	    arrays->y1[arrays->rear]=y1;
	    arrays->y2[arrays->rear]=y2;
	}
	else
	{
	    arrays->rear++;
	    arrays->arr[arrays->rear]=item;
	    arrays->x1[arrays->rear]=x1;
	    arrays->x2[arrays->rear]=x2;
	    arrays->y1[arrays->rear]=y1;
	    arrays->y2[arrays->rear]=y2;
	}

    }
void insert_move(struct q *arrays)//movement of rectangle
{
    int data,rear=0,i,j,k;
    char str[3],ptr[3];
    setbkcolor(BLACK);
   if(isfull(arrays))
    return;
    outtextxy(50,300,"Enter data");
    data=getch();
    setcolor(BLACK);
outtextxy(50,300,"Enter data");
    sprintf(str,"%c",data);
    setcolor(YELLOW);
if(arrays->rear==arrays->capacity-1&&arrays->fronts!=0)
    {//moving rectangle vertically
    for(i=0;i<=100;i=i+50){
        rectangle(550,230-i,620,280-i);
         settextstyle(3,0,3);
   setcolor(RED);
   outtextxy(575,245-i,str);
        delay(400);
        setcolor(BLACK);
          outtextxy(575,245-i,str);
         rectangle(550,230-i,620,280-i);
         setcolor(YELLOW);
    }
    k=arrays->capacity-1;
      for(j=0;j<=480;j=j+80)//moving horizontally
    {
        rectangle(550-j,230-i+50,620-j,280-i+50);
        setcolor(RED);
        outtextxy(575-j,245-i+50,str);
        delay(400);
        setcolor(BLACK);
        rectangle(550-j,230-i+50,620-j,280-i+50);
        outtextxy(575-j,245-i+50,str);
        setcolor(YELLOW);
        if(j>=160&&k>=arrays->fronts)//re stablish clear rectangle
        {
         rectangle(arrays->x1[k],arrays->y1[k],arrays->x2[k],arrays->y2[k]);
        setcolor(RED);
        sprintf(ptr,"%c",arrays->arr[k]);
        outtextxy(arrays->x1[k]+25,arrays->y1[k]+15,ptr);
        setcolor(YELLOW);
        k--;
        setcolor(BLACK);
        outtextxy(400,245,"rear");
        setcolor(YELLOW);
        }

    }//final result
rectangle(550-j+80,230-i+50,620-j+80,280-i+50);
        setcolor(RED);
        outtextxy(575-j+80,245-i+50,str);
        setcolor(YELLOW);
        insertion(arrays,data,550-j+80,230-i+50,620-j+80,280-i+50);
    }
    else
    { for(i=0;i<=100;i=i+50){
        rectangle(550,230-i,620,280-i);
         settextstyle(3,0,3);
   setcolor(RED);
   outtextxy(575,245-i,str);
        delay(400);
        setcolor(BLACK);
          outtextxy(575,245-i,str);
         rectangle(550,230-i,620,280-i);
         setcolor(YELLOW);
    }
    rear=arrays->rear;
    rear++;
    k=arrays->capacity-1;
    for(j=0;j<=480-(rear*80);j=j+80)
    {
        rectangle(550-j,230-i+50,620-j,280-i+50);
        setcolor(RED);
        outtextxy(575-j,245-i+50,str);
        delay(400);
        setcolor(BLACK);
        rectangle(550-j,230-i+50,620-j,280-i+50);
        outtextxy(575-j,245-i+50,str);
        setcolor(YELLOW);
         if(j>=160&&k>=arrays->fronts)//re stablish clear rectangle
        {
         rectangle(arrays->x1[k],arrays->y1[k],arrays->x2[k],arrays->y2[k]);
        setcolor(RED);
        sprintf(ptr,"%c",arrays->arr[k]);
        outtextxy(arrays->x1[k]+25,arrays->y1[k]+15,ptr);
        setcolor(YELLOW);
        k--;

        setcolor(YELLOW);
        }
    }
rectangle(550-j+80,230-i+50,620-j+80,280-i+50);
        setcolor(RED);
        outtextxy(575-j+80,245-i+50,str);
        setcolor(YELLOW);
        insertion(arrays,data,550-j+80,230-i+50,620-j+80,280-i+50);
    }
{
  rear=arrays->rear;
  rear++;

}
}
void deletion(struct q *arrays)
{

	if(arrays->fronts==arrays->rear)
	{
	    arrays->fronts=-1;
	    arrays->rear=-1;
	}
	else if(arrays->fronts==arrays->capacity-1)
	    arrays->fronts=0;
	else
	    arrays->fronts++;


 }

void delete_move(struct q *arrays)
{ char str[3];
if(arrays->fronts==-1)
{
    outtextxy(50,290,"queue is empty");
    delay(600);
    setcolor(BLACK);
    outtextxy(50,290,"queue is empty");
    setcolor(YELLOW);
    return;
}
    setcolor(BLACK);
sprintf(str,"%c",arrays->arr[arrays->fronts]);
    rectangle(arrays->x1[arrays->fronts],arrays->y1[arrays->fronts],arrays->x2[arrays->fronts],arrays->y2[arrays->fronts]);
    outtextxy(arrays->x1[arrays->fronts]+25,arrays->y1[arrays->fronts]+15,str);
setcolor(YELLOW);
deletion(arrays);
}

main()
{
int gd=0,gm,choice=0,i;
initgraph(&gd,&gm,"");
struct q *arrays;
arrays=create_array(5);
make_container();
index();
setbkcolor(RED);
setcolor(YELLOW);
settextstyle(3,0,3);
outtextxy(20,360,"1: Insert");
outtextxy(150,360,"2: Delete");
while(1)
{
    choice=getch();
    if(choice=='1')
        insert_move(arrays);
    else if(choice=='2'){
        delete_move(arrays);

   {
       for(i=0;i<5;i++)
       {
           setcolor(BLACK);
               outtextxy(80+(i*80),250,"rear");
    outtextxy(80+(i*80),70,"front");
    setcolor(YELLOW);
       }
   }
    }
        rear_front(arrays);

}
getch();
closegraph();
}
