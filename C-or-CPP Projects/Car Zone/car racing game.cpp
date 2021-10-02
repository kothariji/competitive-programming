#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
void company(void);
void loading(int);
char lobby(void);
void profile(void);
void info(void);
void graphic(void);
int enemy(int,int );
void game_over(void);
main()
{   char choice;
    int gd=0,gm,i=0;
    initgraph(&gd,&gm,"");
    company();
    loading(i);
    info();
    choice=lobby();
while(choice=='p')
{    clearviewport();
     choice=lobby();
}
     getch();
     closegraph();
}
void loading(int i)
{      setbkcolor(BLUE);
       for(i=0;i<=400;i=i+10)
 {    setcolor(11);
     settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
     outtextxy(150,100,"CAR ZONE");
 setcolor(RED);
 setlinestyle(SOLID_LINE,4,THICK_WIDTH);
 setcolor(GREEN);
 line(0,330,640,330);
   setcolor(BLACK);
   settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
    outtextxy(200,350,"LOADING...");
    setcolor(14);

    ellipse(100+i,300,0,150,50,15);
    ellipse(166+i,307,0,130,30,10);
    line(195+i,307,195+i,320);
    line(190+i,320,195+i,320);
    ellipse(180+i,320,0,180,10,10);
    line(100+i,320,170+i,320);
        ellipse(90+i,320,0,180,10,10);
        line(44+i,294,55+i,294);
        line(44+i,294,48+i,305);
        line(48+i,305,48+i,318);
        line(48+i,318,79+i,318);
        circle(180+i,320,7);
        circle(90+i,320,7);
        circle(180+i,320,2);
        circle(90+i,320,2);
        line(150+i,300,48+i,300);
        line(100+i,285,105+i,300);
        if(i>=350)
            delay(300);
            delay(100);
        clearviewport();

}
}
void company(void)
{    setbkcolor(9);
    setcolor(WHITE);
    settextstyle(COMPLEX_FONT,HORIZ_DIR,8);
 outtextxy(80,75,"UG THE SEP");
 setcolor(BLACKNESS);
 settextstyle(BOLD_FONT,HORIZ_DIR,6);
  outtextxy(170,200,"PRESENTED");
 settextstyle(BOLD_FONT,HORIZ_DIR,3);
  outtextxy(240,300,"TENCENUG");
 delay(5000);
 clearviewport();
 setbkcolor(BLACK);
}
char lobby(void)
{ cleardevice();
     char choice;
    setfillstyle(SOLID_FILL,BLUE);
 rectangle(300,100,600,400);
 floodfill(500,200,YELLOW);
 setcolor(BLACK);
 setfillstyle(SOLID_FILL,RED);
 rectangle(300,120,525,175);
 floodfill(400,150,BLACK);
 setcolor(YELLOW);
 outtextxy(220,135,"1:-");
 settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
  outtextxy(350,132,"PLAY");
  setcolor(BLACK);
  setfillstyle(SOLID_FILL,RED);
  rectangle(300,220,525,275);
  floodfill(375,250,BLACK);
  setcolor(YELLOW);
  outtextxy(240,235,"2:-");
  settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
  outtextxy(330,232,"PROFILE");
    setcolor(BLACK);
  setfillstyle(SOLID_FILL,RED);
  rectangle(300,320,525,375);
  floodfill(375,350,BLACK);
  setcolor(YELLOW);
  outtextxy(240,335,"3:-");
  settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
  outtextxy(360,332,"EXIT");
  setbkcolor(BLACK);
  choice=getch();
  if(choice=='s')
   {   clearviewport();
       graphic();}
  if(choice=='p')
  {clearviewport();
   profile();
   }
  if(choice=='e')
    exit(0);
    return(choice);
  }
void profile(void)
{
    FILE *fp;

    char arr[20];
    setbkcolor(RED);
    setfillstyle(SOLID_FILL,BLUE);
    rectangle(50,20,570,420);
    floodfill(200,100,YELLOW);
    fp=fopen("carzone.txt","r");
    fgets(arr,20,fp);
       settextstyle(BOLD_FONT,HORIZ_DIR,6);
    outtextxy(70,45,arr);
    settextstyle(BOLD_FONT,HORIZ_DIR,4);
    outtextxy(70,150,"YOU ARE A CARZONE PLAYER");
    outtextxy(70,250,"e for exit,s for start ");
    outtextxy(70,300,"p to profile");
    getch();
 }
void info(void)
{
  char arr[20],i;
  FILE *fp;
  fp=fopen("carzone.txt","w");
  setbkcolor(RED);
  setcolor(BLUE);
  setfillstyle(SOLID_FILL,BLUE);
  floodfill(300,200,BLUE);
settextstyle(BOLD_FONT,HORIZ_DIR,5);
  outtextxy(100,150,"enter your name:-");
  for(i=0;i!=20;i++)
  { arr[i]=getch();
    fputc(arr[i],fp);

  if(arr[i]==13)
    break;

  }
fclose(fp);
}
void graphic(void)
{   int i=0,x=0,e=0;
int x1=0;
int page=0;
int k=0;
 long int score=0;
char str[3];
     setcolor(WHITE);
    while(1){
            setactivepage(page);
    setvisualpage(1-page);
            cleardevice();
             if(420==60+e&&122+x==122+x1){
         x1=enemy(e,x1);
            e+=45;
            delay(1000);
            exit(0);
            }
            outtextxy(0,80,"Score:");
            sprintf(str,"%u",score);
            outtextxy(30,100,str);
                 //creating car
            setfillstyle(SOLID_FILL,BLUE);
            rectangle(100+x,440,188+x,480);
            floodfill(150+x,450,WHITE);
            setfillstyle(SOLID_FILL,RED);
            rectangle(122+x,420,166+x,440);
            floodfill(150+x,430,WHITE);
             if(e>=480){
                 e=0;
                x1=0;
                }
            x1=enemy(e,x1);
            e+=45;

    if(i>=160)
        i=0;
        //road creation
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(0,0,100,480);
    floodfill(60,250,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle(540,0,640,480);
    floodfill(580,300,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(290,20+i,320,80+i);
    floodfill(300,25+i,WHITE);
        setfillstyle(SOLID_FILL,WHITE);
    rectangle(290,140+i,320,200+i);
    floodfill(300,150+i,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(290,260+i,320,320+i);
    floodfill(300,280+i,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(290,380+i,320,440+i);
    floodfill(300,400+i,WHITE);
    i+=40;
    if(GetAsyncKeyState(VK_LEFT))
        x-=88;
    else if(GetAsyncKeyState(VK_RIGHT))
        x+=88;
        score+=1;
    page=1-page;
delay(150);
    }
}
int enemy(int y,int x)
{
    int r=0;
if(y>=480||y==0){
    r=rand()%5;
    if(r==0)
     x=0;
        else if(r==1)
        x+=88;
        else if(r==2)
        x+=176;
        else if(r==3)
            x+=264;
            else if(r==4)
                x+=352;
        }
              setfillstyle(SOLID_FILL,YELLOW);
            rectangle(100+x,0+y,188+x,40+y);
            floodfill(150+x,20+y,WHITE);
            setfillstyle(SOLID_FILL,LIGHTCYAN);
            rectangle(122+x,40+y,166+x,60+y);
            floodfill(140+x,50+y,WHITE);
            return(x);
}
