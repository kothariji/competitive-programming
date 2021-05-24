#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
void front_look(POINT *cursorpos);
void credits(POINT *cursorpos);
void Test(POINT *cursorpos,int sec);
void Result(POINT *cursor,float accuracy,int lpm,int wpm,char str[]);
void LeaderBoard(POINT *cursorpos);
void Letter_typing(POINT *cursorpos);
void Data(int qua,int total_l,int inc,int time_taken,POINT *cursorpos);
char* Generate_word(void);
void Kill_word(POINT *cursorpos);
main()
{
    POINT cursor_pos;
    int gd=0,gm,i=0,time=0;
    char type,str[3];
    initgraph(&gd,&gm,"");

    setfillstyle(SOLID_FILL,YELLOW);
     rectangle(0,0,640,480);
     floodfill(200,200,WHITE);

setbkcolor(12);
front_look(&cursor_pos);
    getch();
    closegraph();
}
void front_look(POINT *cursorpos)
{
    int i,y=30;
    cleardevice();
    setbkcolor(LIGHTBLUE);
setlinestyle(SOLID_LINE,0,2);
setcolor(LIGHTBLUE);
settextstyle(BOLD_FONT,HORIZ_DIR,3);
  //rectangle box
   for(i=0;i<7;i++){
    setfillstyle(SOLID_FILL,LIGHTBLUE);
  rectangle(30,y,200,y+40);
  floodfill(50,y+10,LIGHTBLUE);
  y+=65;
   }
setcolor(12);
//writing on that box
  outtextxy(35,40,"1 Min Test");
  outtextxy(30,105,"1.4 Min Test");
  outtextxy(45,170,"Bird Life");
  outtextxy(35,235,"Kill word");
  outtextxy(35,300,"LeaderBoard");
  outtextxy(50,365,"Credits");
  outtextxy(70,430,"Exit");
  outtextxy(240,420,"Hey Man show your ability!!");
  //loading image
  readimagefile("typing.jpeg",220,50,620,400);
  while(1){
  if(GetAsyncKeyState(VK_LBUTTON))
  {
    GetCursorPos(cursorpos);
    if(cursorpos->x-5>=30&&cursorpos->x-5<=200&&cursorpos->y-35>=30&&cursorpos->y-35<=70)
Test(cursorpos,60);
    else if(cursorpos->x-5>=30&&cursorpos->x-5<=200&&cursorpos->y-35>=95&&cursorpos->y-35<=135)
Test(cursorpos,100);
 else if(cursorpos->x-5>=30&&cursorpos->x-5<=200&&cursorpos->y-35>=160&&cursorpos->y-35<=200)
 Letter_typing(cursorpos);
  else if(cursorpos->x-5>=30&&cursorpos->x-5<=200&&cursorpos->y-35>=225&&cursorpos->y-35<=265)
 Kill_word(cursorpos);
 else if(cursorpos->x-5>=30&&cursorpos->x-5<=200&&cursorpos->y-35>=290&&cursorpos->y-35<=330)
LeaderBoard(cursorpos);
 else if(cursorpos->x-5>=30&&cursorpos->x-5<=200&&cursorpos->y-35>=355&&cursorpos->y-35<=395)
    credits(cursorpos);
    else if(cursorpos->x-5>=30&&cursorpos->x-5<=200&&cursorpos->y-35>=410&&cursorpos->y-35<=450)
        exit(0);
  }
  }

  }
void credits(POINT *cursorpos)
{ int page=0;
    cleardevice();
    setbkcolor(12);
    setcolor(YELLOW);
    readimagefile("ug.jpeg",320,50,600,270);
    while(1){
outtextxy(220,20,"UG Typing Expert");
    outtextxy(20,70,"Developer: Ujjwal(UG)");
    outtextxy(20,100,"Contact Developer:");
    rectangle(40,160,300,200);
    rectangle(500,350,600,390);
    outtextxy(520,360,"Back");
outtextxy(45,170,"LinkedIn Account");
outtextxy(0,240,"Developer Location:");
outtextxy(0,270," India,Uttar Pradesh,Gorakhpur");
outtextxy(0,300,"follow me on linkedIn ");
 if(GetAsyncKeyState(VK_LBUTTON))
{
 GetCursorPos(cursorpos);
 if(cursorpos->x-5>=40&&cursorpos->x-5<=300&&cursorpos->y-35>=160&&cursorpos->y-35<=200)
    system("explorer https://www.linkedin.com/in/ujjwal-gupta-ug-233543202/");
    else if(cursorpos->x-5>=500&&cursorpos->x-5<=600&&cursorpos->y-35>=350&&cursorpos->y-35<=390)
    front_look(cursorpos);

}

   }
}
void Test(POINT *cursorpos,int sec)
{ cleardevice();
   // generate_paragraph();
   settextstyle(SIMPLEX_FONT,HORIZ_DIR,1);
char str[30],type,time_left[3];
int time_spent=0,i=0,j=0,mistake=0,left=sec,word=0,k=0;
float accuracy;
char res[260]={"Today the World is changing very fast and We also need to change us according to it The Traveling Become to Fast and cheap The Technology is to unique and modified So Let Start to Create New and Compete the WorldToday the World is changing very Fast and Fast"};
char fin[strlen(res)];
rectangle(100,20,640,250);
outtextxy(0,20,"Time left");
setcolor(YELLOW);
outtextxy(110,30,"Today the World is changing very fast and ");
outtextxy(110,60,"We also need to change us according to it ");
outtextxy(110,90,"The Traveling Become to Fast and cheap ");
outtextxy(110,120,"The Technology is to unique and modified ");
outtextxy(110,150,"So Let Start to Create New and Compete the World ");
outtextxy(110,180,"Today the World is changing very Fast and Fast ");
setfillstyle(SOLID_FILL,12);
rectangle(100,260,600,300);
floodfill(300,270,YELLOW);
while(1)
{
    if(time_spent%1000==0){
setcolor(12);
setbkcolor(12);
    outtextxy(30,50,time_left);
setcolor(WHITE);
    sprintf(time_left,"%d",sec-(time_spent/1000));
    outtextxy(30,50,time_left);
  if(time_spent/1000==sec)
break;
    }
if(kbhit())
{
    setcolor(12);
    setbkcolor(12);
        outtextxy(110,270,str);
        setcolor(WHITE);
    type=getch();
    if(type==' '){
        i=0;
    }
sprintf(&str[i],"%c",type);
    i++;
    outtextxy(110,270,str);
    fin[j]=type;
     if(res[j]!=type)
mistake++;
if(strlen(res)==j&&time_spent/1000!=sec){
left=time_spent/1000;
time_spent=sec*1000-100;
}
j++;
 }
delay(100);
time_spent+=100;

}

accuracy=(float)mistake/j*100;
setbkcolor(LIGHTBLUE);
setcolor(YELLOW);
outtextxy(100,350,"Enter your name");
rectangle(100,380,350,410);
i=0;
while(1)
{
    type=getch();
    if(type==13)
        break;
    sprintf(&str[i],"%c",type);
    outtextxy(110,390,str);
    i++;

}
i=0;
while(fin[i]!=NULL)
{
    while(fin[i]==' '&&fin[i]!=NULL){
      if(k==1){
        word++;
    k=0;}
        i++;
    }
    while(fin[i]!=' '&&fin[i]!=NULL)
    {
        i++;
        k=1;
    }
}
if(left!=sec){
j=j/left*sec;
word=word/left*sec;
}
setbkcolor(12);
Result(cursorpos,100.0-accuracy,j,word,str);
 }
void Result(POINT *cursorpos,float accuracy,int lpm,int wpm,char str[])
{
    FILE *fp;
char acc[3],l[3],w[3],a;
     cleardevice();
    settextstyle(BOLD_FONT,HORIZ_DIR,5);
    setcolor(LIGHTBLUE);
outtextxy(140,20,"UG Typing Test");
     settextstyle(BOLD_FONT,HORIZ_DIR,4);
setcolor(3);
 outtextxy(250,80,"Result");
settextstyle(BOLD_FONT,HORIZ_DIR,2);
 outtextxy(20,120,"Candidate Name:");
 outtextxy(200,120,str);
 outtextxy(20,150,"Speed(WPM):");
 outtextxy(20,180,"Speed(LPM):");
 outtextxy(20,210,"Accuracy:");
sprintf(acc,"%f",accuracy);
 outtextxy(200,210,acc);
 sprintf(w,"%d",wpm);
 outtextxy(200,150,w);
 sprintf(l,"%d",lpm);
 outtextxy(200,180,l);
 fp=fopen("Leaderboard.txt","a+");
 fputs(str,fp);
 fputs("             ",fp);
 fputs(w,fp);
 fputs("               ",fp);
 fputs(l,fp);
 fputs("\n",fp);
 fclose(fp);
 setfillstyle(SOLID_FILL,LIGHTBLUE);
 rectangle(500,20,600,60);
 floodfill(520,40,3);
 outtextxy(520,30,"Back");
while(1){
 if(GetAsyncKeyState(VK_LBUTTON)){
        GetCursorPos(cursorpos);
 if(cursorpos->x-5>=500&&cursorpos->x-5<=600&&cursorpos->y-35>=20&&cursorpos->y-35<=60)
    front_look(cursorpos);}
 }
 }
void LeaderBoard(POINT *cursorpos)
{
    char str[100];
    FILE *fp;
    int i=60;
cleardevice();
setcolor(LIGHTCYAN);
setfillstyle(SOLID_FILL,13);
rectangle(20,20,150,50);
floodfill(30,30,LIGHTCYAN);
setfillstyle(SOLID_FILL,13);
rectangle(240,20,370,50);
floodfill(260,30,LIGHTCYAN);
setfillstyle(SOLID_FILL,13);
rectangle(440,20,570,50);
floodfill(450,30,LIGHTCYAN);
setbkcolor(13);
outtextxy(30,22,"Name");
outtextxy(250,22,"WPM");
outtextxy(450,22,"LPM");
setbkcolor(LIGHTBLUE);
setcolor(12);
fp=fopen("Leaderboard.txt","r+");
if(fp==NULL)
{
    outtextxy(200,200,"No Records");
    delay(2000);
    setbkcolor(12);
    front_look(cursorpos);
}
while(fgets(str,100,fp)!=NULL)
{
  outtextxy(30,i,str);
  i+=30;
}
fclose(fp);
 setfillstyle(SOLID_FILL,YELLOW);
rectangle(500,430,600,460);
 floodfill(520,440,12);
 outtextxy(520,433,"Back");
while(1){
 if(GetAsyncKeyState(VK_LBUTTON)){
        GetCursorPos(cursorpos);
 if(cursorpos->x-5>=500&&cursorpos->x-5<=600&&cursorpos->y-35>=430&&cursorpos->y-35<=460){
setbkcolor(12);
    front_look(cursorpos);}}
 }
}
void Letter_typing(POINT *cursorpos)
{ int i=0;
int time_spent=0,choose,j=0,x=0,inc=0;
char l,t,arr[1000],str[3];
 cleardevice();
 setbkcolor(LIGHTBLUE);
        srand(time(0));
while(j<1000){
choose=rand()%2;
if(choose==1)
{
  l='A'+rand()%26;
}
else
{
    l='a'+rand()%26;
}
 arr[j]=l;
 j++;
}
j=0;
while(1)
{  cleardevice();
setcolor(LIGHTGREEN);
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
    setbkcolor(LIGHTBLUE);
setcolor(BLACK);
arc(40+x,getmaxy()/4+i,10,180,25);
arc(40+x,getmaxy()/4+i,220,320,25);
ellipse(65+x,getmaxy()/4+i,0,360,15,5);
ellipse(65+x,getmaxy()/4+10+i,0,360,15,5);
arc(40+35+x,getmaxy()/4-25+i,185,230,35);
ellipse(17+x,getmaxy()/4+10+i,0,360,4,12);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(40+x,getmaxy()/4+i,BLACK);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(17+x,getmaxy()/4+10+i,BLACK);
setfillstyle(SOLID_FILL,12);
floodfill(65+x,getmaxy()/4+i,BLACK);
setfillstyle(SOLID_FILL,12);
floodfill(65+x,getmaxy()/4+10+i,BLACK);
setfillstyle(SOLID_FILL,WHITE);
floodfill(40+20+x,getmaxy()/4-10+i,BLACK);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,12);
rectangle(160,260,500,330);
floodfill(180,270,YELLOW);
setfillstyle(SOLID_FILL,BLUE);
rectangle(200,350,300,390);
floodfill(210,370,YELLOW);
if(j==999)
{
    j=1;
    break;
}
sprintf(str,"%c",arr[j]);
setbkcolor(12);
settextstyle(BOLD_FONT,HORIZ_DIR,6);
outtextxy(300,270,str);
 if(kbhit())
{
    t=getch();
    sprintf(str,"%c",t);
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
    setbkcolor(BLUE);
    outtextxy(210,360,str);
if(t==arr[j])
    i-=10;
else{
    i+=2;
inc++;
}
    j++;
}
if(getmaxy()/4+i+22>=getmaxy()/2)
    break;
if(getmaxy()/4+i-8<=0)
i+=10;
if(x+17>=getmaxx()-60)
    x=0;
delay(100);
time_spent+=100;
if(i>50)
    i+=2;
i+=1;
x+=10;
setbkcolor(LIGHTBLUE);
}
setbkcolor(WHITE);
if(j==1)
Data(1,j,inc,time_spent/1000,cursorpos);
else
    Data(0,j,inc,time_spent/1000,cursorpos);
}
void Data(int qua,int total_l,int inc,int time_taken,POINT *cursorpos)
{    char t,str[20],age[3],name[40];
float accuracy=0;
int i=0;
    cleardevice();
    setcolor(12);
setfillstyle(SOLID_FILL,10);
rectangle(20,60,300,100);
floodfill(40,80,12);
setfillstyle(SOLID_FILL,10);
rectangle(20,130,100,170);
floodfill(40,150,12);
setbkcolor(10);
settextstyle(BOLD_FONT,HORIZ_DIR,2);
outtextxy(40,70,"Enter Your Name");
outtextxy(40,140,"Age");
while(t!=13)
{
    t=getch();
  if(i==0)
  {
setcolor(10);
      outtextxy(40,70,"Enter Your Name");
setcolor(12);
  }
    sprintf(&str[i],"%c",t);
    outtextxy(40,70,str);
i++;
}
strcpy(name,str);
i=0;
t='a';
while(t!=13)
{
    t=getch();
  if(i==0)
  {
setcolor(10);
      outtextxy(40,140,"Age");
setcolor(12);
  }
    sprintf(&age[i],"%c",t);
    outtextxy(40,140,age);
i++;
}
setcolor(BLUE);
setbkcolor(WHITE);
settextstyle(BOLD_FONT,HORIZ_DIR,4);
outtextxy(200,180,"Tip of the Day");
readimagefile("images (2).jpg",120,210,490,435);
settextstyle(BOLD_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(2,440,640,470);
floodfill(20,443,BLUE);
setbkcolor(YELLOW);
outtextxy(15,445,"Something special is just behind you Let explore it");
delay(4000);
setbkcolor(12);
cleardevice();
  settextstyle(BOLD_FONT,HORIZ_DIR,5);
    setcolor(LIGHTBLUE);
outtextxy(140,20,"UG Typing Test");
     settextstyle(BOLD_FONT,HORIZ_DIR,4);
setcolor(3);
 outtextxy(250,80,"Result");
settextstyle(BOLD_FONT,HORIZ_DIR,2);
 outtextxy(20,120,"Candidate Name:");
 outtextxy(200,120,name);
 outtextxy(20,160,"Candidate Age:");
  outtextxy(200,160,age);
   outtextxy(20,200,"Total letter Typed:");
   sprintf(str,"%d",total_l);
  outtextxy(260,200,str);
   outtextxy(20,240,"Incorrect Letter:");
   sprintf(str,"%d",inc);
  outtextxy(260,240,str);
     outtextxy(20,280,"Correct Letter:");
   sprintf(str,"%d",total_l-inc);
  outtextxy(260,280,str);
  outtextxy(20,320,"Time Taken(sec):");
   sprintf(str,"%d",time_taken);
  outtextxy(260,320,str);
    outtextxy(20,360,"Accuracy:");
    accuracy=(float)inc/total_l*100;
   sprintf(str,"%.2f",100-accuracy);
  outtextxy(260,360,str);
  if(qua==1){
    outtextxy(20,420,"You are Just Outstanding and Pro Player in typing");
  }
  else
      outtextxy(20,420,"Nice You Have Done a Good Job");
  setfillstyle(SOLID_FILL,LIGHTBLUE);
  rectangle(500,0,600,40);
  floodfill(520,20,3);
  setbkcolor(LIGHTBLUE);
  setcolor(YELLOW);
  outtextxy(520,10,"Back");
  while(1)
  {
if(GetAsyncKeyState(VK_LBUTTON))
{
  GetCursorPos(cursorpos);
  if(cursorpos->x-5>=500&&cursorpos->x-5<=600&&cursorpos->y-35>=0&&cursorpos->y-35<=40)
  {
   setbkcolor(12);
    front_look(cursorpos);
  }
}
  }
}
char* Generate_word(void)
{
  char words[103][20]={"at","and","modern","Family","Fashion","generate","Polish","quality","quantity","mind","folish","Friendship","poverty","segment","chord","computer","typing","quantity","confidence","qualify","excellent","amazing","answer","Typing","Expert","mathematics","falling","come","address","complain","ready","retirement","advance","block","network","mentality","memory","control","sector","geography","connection","talent","temperature","wind","householder","programming","lecture","literally","atom","python","panic","Iconic","colonel","enormity","Disinterested","deccanqueen","railways","indian","reservation","Misspell","Pharaoh","Intelligence","Handkerchief","Pronunciation","settlement","reference","word","variable","constant","Chiaroscurist","isoleucine","Irregardless","Nonplussed","DoxyBlocks","Project","live","Points","education","painting","pratice","school","college","character","types","zebra","covid","coronavirus","sanitizer","mask","place","famous","beauty","workspace","tesla","solar","system","journey","cave","mountain","season","deserved","capability","illness"};
char *ptr,data[20];
int r;
srand(time(0));
r=rand()%103;
strcpy(data,words[r]);
ptr=data;
return(ptr);
}

void Kill_word(POINT *cursorpos)
{ char *w,str[30],t,h[30],s[3];
   int i=0,j=0,k,p=0,x=0,no=0;
    cleardevice();
    w=Generate_word();
    while(i<strlen(w))
     {
         str[i]=w[i];
          i++;
     }
str[i]=NULL;
 while(1)
{
    cleardevice();
if(420-x<=100)
    break;
        outtextxy(420-x,200,str);
        line(100,180,100,240);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(0,0,getmaxx(),180);
floodfill(100,120,12);
rectangle(0,240,getmaxx(),getmaxy());
floodfill(230,250,12);
 if(kbhit())
 {
     t=getch();
     if(t==str[j])
     {
    setcolor(LIGHTBLUE);
     outtextxy(420-x,200,str);
     setcolor(12);
        j++;
     for(k=j;k<i;k++,p++)
     {
      h[p]=str[k];
      }
     h[p]=NULL;
       strcpy(str,h);
       p=j=0;
      i--;
      }
     if(j==i)
     { no++;
          w=Generate_word();
          x=0;
          i=0;
          j=0;
    while(i<strlen(w))
     {
         str[i]=w[i];
          i++;
     }
str[i]=NULL;
 }
 }
 setbkcolor(YELLOW);
 outtextxy(10,40,"Score:");
 sprintf(s,"%d",no);
 outtextxy(150,40,s);
 setbkcolor(LIGHTBLUE);
delay(100);
if(no>5)
x+=2;
if(no>10)
    x+=2;
if(no>15)
    x+=4;
x+=7;
}
 setbkcolor(LIGHTCYAN);
cleardevice();
setcolor(BLUE);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(100,100,500,300);
floodfill(150,130,BLUE);
setcolor(7);
setbkcolor(YELLOW);
settextstyle(BOLD_FONT,HORIZ_DIR,5);
outtextxy(175,120,"GAME OVER");
setfillstyle(SOLID_FILL,12);
rectangle(175,180,400,240);
floodfill(190,200,7);
setcolor(5);
settextstyle(BOLD_FONT,HORIZ_DIR,3);
setbkcolor(12);
outtextxy(180,200,"Score:");
outtextxy(280,200,s);
setcolor(MAGENTA);
rectangle(500,20,600,60);
setbkcolor(LIGHTCYAN);
outtextxy(520,30,"Back");
readimagefile("game.jpg",0,310,getmaxx(),getmaxy());
setbkcolor(12);
while(1)
{
if(GetAsyncKeyState(VK_LBUTTON))
{
    GetCursorPos(cursorpos);
    if(cursorpos->x-5>=500&&cursorpos->x-5<=600&&cursorpos->y-35>=20&&cursorpos->y-35<=60)
        front_look(cursorpos);
}
}
}

