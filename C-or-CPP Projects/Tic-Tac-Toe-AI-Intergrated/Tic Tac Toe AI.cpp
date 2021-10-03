#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
#include<string.h>
int chance=1,last_move=-1,AI_last_move=-1,c=0;
void front_look(POINT *cursorpos);
void display(POINT *cursorpos,int r);
int Generate_Ques(void);
void game(int,POINT *cursorpos);
void toss(POINT *cursorpos);
int check_rep(POINT *cursorpos,int *arr,int flag);
void output(int,POINT *cursorpos);
void check(int *arr,POINT *cursorpos);
void AI_3rd_chance(POINT *cursorpos,int *arr);
int computer(POINT *cursorpos,int *arr);
int human_Winning(int *arr,POINT *cursorpos);
void left_one(int *arr,POINT *cursorpos);
int AI_winning(int *arr,POINT *cursorpos);
void outtextxy(int x, int y, const char* text) {
  outtextxy(x, y, const_cast<char*>(text));
}
int main()
{
    POINT Cursor_pos;
int gd=0,gm;
int r;
initgraph(&gd,&gm,"");
front_look(&Cursor_pos);
getch();
closegraph();
}
void display(POINT *cursorpos,int r)
{
cleardevice();
  setcolor(9);
  setlinestyle(SOLID_LINE,4,THICK_WIDTH);
 line(200,100,200,300);
 line(350,100,350,300);
 line(120,160,420,160);
 line(120,250,420,250);
 setfillstyle(SOLID_FILL,12);
 line(0,320,getmaxx(),320);
 floodfill(102,340,getcolor());
      settextstyle(BOLD_FONT,HORIZ_DIR,5);
 outtextxy(180,20,"Tic Tac Toe");
 game(r,cursorpos);
}
void toss(POINT *cursorpos)
{
    cleardevice();
    int choice,r;
    settextstyle(COMPLEX_FONT,HORIZ_DIR,8);
    setcolor(LIGHTCYAN);
    outtextxy(200,20,"TOSS");
    readimagefile("toss.jpg",170,120,450,260);
        settextstyle(COMPLEX_FONT,HORIZ_DIR,4);
        rectangle(100,270,260,330);
        rectangle(360,270,530,330);

    outtextxy(120,284,"Head");
    outtextxy(380,284,"Tail");
    while(1){
if(GetAsyncKeyState(VK_LBUTTON)){
    GetCursorPos(cursorpos);
    if(cursorpos->x-5>=100&&cursorpos->x-5<=260&&cursorpos->y-35>=270&&cursorpos->y-35<=330){
    choice==1;
     break;}
else if(cursorpos->x-5>=360&&cursorpos->x-5<=530&&cursorpos->y-35>=270&&cursorpos->y-35<=330){
   choice==0;
   break;}

}
}
srand(time(0));
r=rand()%2;
if(r==1)
  outtextxy(100,340,"You Won the toss");
else
    outtextxy(100,340,"Computer Won the toss");
delay(1000);
display(cursorpos,r);
}
void game(int r,POINT *Cursorpos)
{
    int tic[9]={0,0,0,0,0,0,0,0,0},k=1;
chance=1;
last_move=-1;
AI_last_move=-1;
    int i=1;
    while(1)
    {
        if(k==1&&c==2){
        r=Generate_Ques();
        k=0;}
        Cursorpos->x=0;
        Cursorpos->y=0;
        if(GetAsyncKeyState(VK_LBUTTON)&&r==1){
                 GetCursorPos(Cursorpos);
r=check_rep(Cursorpos,tic,r);
            k=1;

        }
else if(r==0||r==2){
            // computer chance
             r=computer(Cursorpos,tic);
           k=1;
            }
            check(tic,Cursorpos);
    }
}
int check_rep(POINT *cursorpos,int *arr,int flag)
{
     settextstyle(BOLD_FONT,HORIZ_DIR,5);
     //1 block
  if(cursorpos->x-5>=120&&cursorpos->x-5<=200&&cursorpos->y-35>=100&&cursorpos->y-35<=150&&arr[0]==0)
{
    if(flag==1){
                arr[0]=1;
        outtextxy(150,110,"X");
        last_move=1;
        chance++;
flag=2;
}
     else if(flag==2){
            arr[0]=2;
        outtextxy(150,110,"O");
        AI_last_move=1;
        chance++;
     flag=1;
     }

}
//second block
else if(cursorpos->x-5>=201&&cursorpos->x-5<=300&&cursorpos->y-35>=100&&cursorpos->y-35<=150&&arr[1]==0)
 {
       if(flag==1){
                 arr[1]=1;
        outtextxy(250,110,"X");
        last_move=2;
        chance++;
flag=2;
}
     else if(flag==2){
            arr[1]=2;
        outtextxy(250,110,"O");
        AI_last_move=2;
        chance++;
     flag=1;
     }

}
//3rd block
else if(cursorpos->x-5>=380&&cursorpos->x-5<=480&&cursorpos->y-35>=100&&cursorpos->y-35<=150&&arr[2]==0)
 {
       if(flag==1){
                 arr[2]=1;
        outtextxy(380,110,"X");
        chance++;
        last_move=3;
 flag=2;
}
     else if(flag==2){
            arr[2]=2;
        outtextxy(380,110,"O");
        AI_last_move=3;
        chance++;
     flag=1;
     }
 }
 //4th block
else if(cursorpos->x-5>=120&&cursorpos->x-5<=200&&cursorpos->y-35>=170&&cursorpos->y-35<=240&&arr[3]==0)
 {
       if(flag==1){
                 arr[3]=1;
        outtextxy(150,200,"X");
        last_move=4;
        chance++;
flag=2;
}
     else if(flag==2){
            arr[3]=2;
            AI_last_move=4;
        outtextxy(150,200,"O");
        chance++;
     flag=1;
     }
}
//5th block
else if(cursorpos->x-5>=220&&cursorpos->x-5<=350&&cursorpos->y-35>=170&&cursorpos->y-35<=240&&arr[4]==0)
 {
       if(flag==1){
                 arr[4]=1;
        outtextxy(270,195,"X");
        last_move=5;
        chance++;
flag=2;
}
     else if(flag==2){
            arr[4]=2;
        outtextxy(270,195,"O");
        AI_last_move=5;
        chance++;
     flag=1;
     }
}
//6th block
else if(cursorpos->x-5>=370&&cursorpos->x-5<=470&&cursorpos->y-35>=170&&cursorpos->y-35<=240&&arr[5]==0)
 {
       if(flag==1){
                 arr[5]=1;
        outtextxy(380,200,"X");
        last_move=6;
        chance++;
flag=2;
}
     else if(flag==2){
            arr[5]=2;
        outtextxy(380,200,"O");
        AI_last_move=6;
     chance++;
     flag=1;
     }
}
//7th block
else if(cursorpos->x-5>=120&&cursorpos->x-5<=200&&cursorpos->y-35>=240&&cursorpos->y-35<=290&&arr[6]==0)
 {
       if(flag==1){
                 arr[6]=1;
        outtextxy(150,270,"X");
        last_move=7;
        chance++;
flag=2;
}
     else if(flag==2){
            arr[6]=2;
        outtextxy(150,270,"O");
        AI_last_move=7;
        chance++;
     flag=1;
     }
}
//8th block
else if(cursorpos->x-5>=220&&cursorpos->x-5<=300&&cursorpos->y-35>=240&&cursorpos->y-35<=290&&arr[7]==0)
 {
       if(flag==1){
                 arr[7]=1;
        outtextxy(250,270,"X");
        last_move=8;
        chance++;
flag=2;
}
     else if(flag==2){
            arr[7]=2;
        outtextxy(250,270,"O");
        AI_last_move=8;
        chance++;
     flag=1;
     }
}
//9th block
else if(cursorpos->x-5>=320&&cursorpos->x-5<=400&&cursorpos->y-35>=240&&cursorpos->y-35<=290&&arr[8]==0)
 {
       if(flag==1){
                 arr[8]=1;
        outtextxy(380,270,"X");
        last_move=9;
        chance++;
flag=2;
}
     else if(flag==2){
            arr[8]=2;
        outtextxy(380,270,"O");
        AI_last_move=9;
        chance++;
     flag=1;
     }
}
outtextxy(180,20,"Tic Tac Toe");

return(flag);
}
void check(int *arr,POINT *cursorpos)
{ int i;
    if(arr[0]==1&&arr[1]==1&&arr[2]==1||arr[0]==2&&arr[1]==2&&arr[2]==2){
    line(120,130,400,130);
    delay(1000);
       output(arr[0],cursorpos);
    }
    else if(arr[3]==1&&arr[4]==1&&arr[5]==1||arr[3]==2&&arr[4]==2&&arr[5]==2){
           line(120,220,400,220);
            delay(1000);
        output(arr[3],cursorpos);
        }
    else if(arr[6]==1&&arr[7]==1&&arr[8]==1||arr[6]==2&&arr[7]==2&&arr[8]==2){
            line(120,290,400,290);
            delay(1000);
        output(arr[6],cursorpos);
        }
    else if(arr[0]==1&&arr[3]==1&&arr[6]==1||arr[0]==2&&arr[3]==2&&arr[6]==2){
            line(160,120,160,300);
            delay(1000);
        output(arr[0],cursorpos);
    }
    else if(arr[1]==1&&arr[4]==1&&arr[7]==1||arr[1]==2&&arr[4]==2&&arr[7]==2){
     line(260,120,260,300);
     delay(1000);
        output(arr[1],cursorpos);
    }
    else if(arr[2]==1&&arr[5]==1&&arr[8]==1||arr[2]==2&&arr[5]==2&&arr[8]==2){
         line(390,120,390,300);
         delay(1000);
        output(arr[2],cursorpos);
    }
    else if(arr[0]==1&&arr[4]==1&&arr[8]==1||arr[0]==2&&arr[4]==2&&arr[8]==2){
        line(120,100,400,295);
         delay(1000);
        output(arr[0],cursorpos);
    }
    else if(arr[2]==1&&arr[4]==1&&arr[6]==1||arr[2]==2&&arr[4]==2&&arr[6]==2){
         line(410,120,100,335);
         delay(1000);
        output(arr[2],cursorpos);
    }
 else {
  for(i=0;i<9;i++)
  {
      if(arr[i]==0)
        break;
  }
  if(i==9)
{
      delay(1000);
    output(0,cursorpos);
    }
    }
}

void output(int win,POINT *cursorpos)
{ setbkcolor(12);
    cleardevice();
    outtextxy(220,20,"RESULT");
    settextstyle(SIMPLEX_FONT,HORIZ_DIR,3);
    if(win==1)
outtextxy(10,200,"Congrats We have done the incredible job.");
    else if(win==2)
        outtextxy(10,200,"Well try but Computer's Win the game");
else
    outtextxy(20,200,"Oops! Match Draw");
delay(2000);
cleardevice();
outtextxy(100,100,"Do you want to play again??");
setfillstyle(SOLID_FILL,YELLOW);
rectangle(100,200,300,260);
floodfill(200,220,getcolor());
rectangle(400,200,600,260);
floodfill(500,220,getcolor());
setbkcolor(YELLOW);
outtextxy(160,220,"YES");
outtextxy(460,220,"NO");
while(1)
{
    if(GetAsyncKeyState(VK_LBUTTON))
    {
GetCursorPos(cursorpos);
        if(cursorpos->x-5>=100&&cursorpos->x-5<=300&&cursorpos->y-35>=200&&cursorpos->y-35<=260)
        { setbkcolor(BLACK);
            cleardevice();
            if(c==1)
            toss(cursorpos);
            else if(c==2)
                display(cursorpos,2);
        }
        else if(cursorpos->x-5>=400&&cursorpos->x-5<=600&&cursorpos->y-35>=200&&cursorpos->y-35<=260)
        {
            front_look(cursorpos);
        }
    }
}
}
int computer(POINT *cursorpos, int *arr)
{ int r;
    srand(time(0));
int choice;
if(chance==1)
    {
        choice=rand()%4;
           if(choice==0){
            cursorpos->x=150;
        cursorpos->y=140;}
            else if(choice==1){
            cursorpos->x=420;
            cursorpos->y=140;}
            else if(choice==2){
           cursorpos->x=150;
           cursorpos->y=280;}
           else{
            cursorpos->x=350;
            cursorpos->y=280;}
}
else if(chance==2)
{
    if(last_move%2!=0&&last_move!=5)
    {
        cursorpos->x=300;
        cursorpos->y=230;
    }
    else
    {
          choice=rand()%4;
           if(choice==0){
            cursorpos->x=150;
        cursorpos->y=140;}
            else if(choice==1){
            cursorpos->x=420;
            cursorpos->y=140;}
            else if(choice==2){
           cursorpos->x=150;
           cursorpos->y=280;}
           else{
            cursorpos->x=350;
            cursorpos->y=280;}
    }
}
else if(chance==3)
{
if(AI_winning(arr,cursorpos))
{
    r=check_rep(cursorpos,arr,2);
    return r;
}
else if(human_Winning(arr,cursorpos))
{
    r=check_rep(cursorpos,arr,2);
    return r;
}
AI_3rd_chance(cursorpos,arr);
}
else if(chance==4)
{
  if(AI_winning(arr,cursorpos))
{
    r=check_rep(cursorpos,arr,2);
    return r;
}
   else if(human_Winning(arr,cursorpos))
 {
          r=check_rep(cursorpos,arr,2);
          return r;
 }
 else
 {
if(arr[1]==0)
{
   cursorpos->x=270;
   cursorpos->y=140;
}
else if(arr[3]==0)
{

   cursorpos->x=160;
   cursorpos->y=230;
}
else if(arr[5]==0)
{
   cursorpos->x=450;
   cursorpos->y=230;

}
else if(arr[7]==0)
{

   cursorpos->x=260;
   cursorpos->y=280;
}
 }
}
else if(chance==5)
{
if(AI_winning(arr,cursorpos))
{
 r=check_rep(cursorpos,arr,2);
 return r;
}
 else if(human_Winning(arr,cursorpos))
 {
          r=check_rep(cursorpos,arr,2);
          return r;
 }
else if(arr[0]==2&&arr[4]==2||arr[8]==2&&arr[4]==2)
    {
if(arr[1]==1||arr[5]==1)
{
   cursorpos->x=150;
   cursorpos->y=280;
}
else if(arr[3]==1||arr[7]==1)
{
 cursorpos->x=420;
 cursorpos->y=140;
}
    }
else if(arr[2]==2&&arr[4]==2||arr[6]==2&&arr[4]==2)
{
    if(arr[1]==1||arr[3]==1)
    {
       cursorpos->x=350;
       cursorpos->y=280;
    }
    else if(arr[5]==1)
    {
        cursorpos->x=150;
        cursorpos->y=140;
    }
}
else if(arr[0]==0)
{
  cursorpos->x=150;
  cursorpos->y=140;
}
else if(arr[2]==0)
{

  cursorpos->x=420;
  cursorpos->y=140;
}
else if(arr[6]==0)
{

  cursorpos->x=150;
  cursorpos->y=280;
}
else if(arr[8]==0)
{

  cursorpos->x=350;
  cursorpos->y=280;
}
}
else if(chance==6||chance==8)
{
    if(AI_winning(arr,cursorpos))
    {
r=check_rep(cursorpos,arr,2);
 return r;
    }
    else if(human_Winning(arr,cursorpos))
    {
r=check_rep(cursorpos,arr,2);
 return r;
    }
    else
    {
        left_one(arr,cursorpos);
    }
}
else if(chance==7)
{
    if(AI_winning(arr,cursorpos))
    {
         r=check_rep(cursorpos,arr,2);
          return r;
    }
    else
    human_Winning(arr,cursorpos);
}
else if(chance==9)
{
left_one(arr,cursorpos);
}
     r=check_rep(cursorpos,arr,2);
     return r;
}

void AI_3rd_chance(POINT *cursorpos,int *arr)
{
    if(last_move%2==0)
    {
        cursorpos->x=250;
        cursorpos->y=220;
    }
    else if(AI_last_move==7&&last_move%2!=0&&last_move!=5||AI_last_move==3&&last_move%2!=0&&last_move!=5)
    {
        if(arr[0]==0)
        {
          cursorpos->x=150;
          cursorpos->y=140;
        }
        else if(arr[8]==0)
        {
            cursorpos->x=350;
            cursorpos->y=280;
        }
    }
    else if(AI_last_move==9&&last_move%2!=0&&last_move!=5||AI_last_move==1&&last_move%2!=0&&last_move!=5)
    {
        if(arr[2]==0)
        {
            cursorpos->x=420;
            cursorpos->y=140;
        }
        else if(arr[6]==0)
        {
            cursorpos->x=150;
            cursorpos->y=280;
        }
    }
else if(last_move==5&&AI_last_move==1)
{
    cursorpos->x=350;
    cursorpos->y=280;
}
else if(last_move==5&&AI_last_move==3)
{
    cursorpos->x=150;
    cursorpos->y=280;
}
else if(last_move==5&&AI_last_move==7)
{
    cursorpos->x=420;
    cursorpos->y=140;
}
else if(last_move==5&&AI_last_move==9)
{
    cursorpos->x=150;
    cursorpos->y=140;
}
}
int human_Winning(int *arr,POINT *cursorpos)
{
if(arr[0]==arr[1]&&arr[2]==0&&arr[0]!=0||arr[5]==arr[8]&&arr[2]==0&&arr[8]!=0||arr[6]==arr[4]&&arr[2]==0&&arr[6]!=0)
    {
 cursorpos->x=420;
 cursorpos->y=140;
    }
else if(arr[1]==arr[2]&&arr[0]==0&&arr[1]!=0||arr[6]==arr[3]&&arr[0]==0&&arr[6]!=0||arr[8]==arr[4]&&arr[0]==0&&arr[8]!=0)
    {
        cursorpos->x=150;
        cursorpos->y=140;
    }
else if(arr[0]==arr[2]&&arr[1]==0&&arr[0]!=0||arr[4]==arr[7]&&arr[1]==0&&arr[7]!=0)
    {
        cursorpos->x=250;
        cursorpos->y=140;
    }
else if(arr[0]==arr[6]&&arr[3]==0&&arr[0]!=0||arr[4]==arr[5]&&arr[3]==0&&arr[4]!=0)
    {
        cursorpos->x=150;
        cursorpos->y=230;
    }
else if(arr[1]==arr[7]&&arr[4]==0&&arr[1]!=0||arr[3]==arr[5]&&arr[4]==0&&arr[3]!=0||arr[6]==arr[2]&&arr[4]==0&&arr[6]!=0||arr[0]==arr[8]&&arr[4]==0&&arr[8]!=0)
{
    cursorpos->x=280;
    cursorpos->y=230;
}
else if(arr[3]==arr[4]&&arr[5]==0&&arr[3]!=0||arr[2]==arr[8]&&arr[5]==0&&arr[2]!=0)
{
    cursorpos->x=440;
    cursorpos->y=230;
}
else if(arr[0]==arr[3]&&arr[6]==0&&arr[0]!=0||arr[7]==arr[8]&&arr[6]==0&&arr[7]!=0||arr[4]==arr[2]&&arr[6]==0&&arr[4]!=0)
{
    cursorpos->x=180;
    cursorpos->y=280;
}
else if(arr[1]==arr[4]&&arr[7]==0&&arr[1]!=0||arr[6]==arr[8]&&arr[7]==0&&arr[8]!=0)
{
    cursorpos->x=280;
    cursorpos->y=280;
}
else if(arr[0]==arr[4]&&arr[8]==0&&arr[0]!=0||arr[2]==arr[5]&&arr[8]==0&&arr[2]!=0||arr[6]==arr[7]&&arr[8]==0&&arr[6]!=0)
{
    cursorpos->x=380;
    cursorpos->y=280;
}
else
    return 0;
    return 1;
}
void left_one(int *arr,POINT *cursorpos)
{
    if(arr[0]==0)
    {
       cursorpos->x=150;
       cursorpos->y=140;
    }
    else if(arr[1]==0)
    {

       cursorpos->x=270;
       cursorpos->y=140;
    }
    else if(arr[2]==0)
    {

       cursorpos->x=440;
       cursorpos->y=140;
    }
    else if(arr[3]==0)
    {

       cursorpos->x=160;
       cursorpos->y=230;
    }
    else if(arr[4]==0)
    {
       cursorpos->x=300;
       cursorpos->y=230;

    }
    else if(arr[5]==0)
    {
       cursorpos->x=450;
       cursorpos->y=230;

    }
    else if(arr[6]==0)
    {
       cursorpos->x=160;
       cursorpos->y=280;

    }
    else if(arr[7]==0)
    {
       cursorpos->x=260;
       cursorpos->y=280;

    }
    else if(arr[8]==0)
    {
       cursorpos->x=360;
       cursorpos->y=280;

    }
}
int AI_winning(int *arr,POINT *cursorpos)
{
    if(arr[0]==arr[1]&&arr[2]==0&&arr[0]==2||arr[5]==arr[8]&&arr[2]==0&&arr[8]==2||arr[6]==arr[4]&&arr[2]==0&&arr[6]==2)
    {
 cursorpos->x=420;
 cursorpos->y=140;
    }
else if(arr[1]==arr[2]&&arr[0]==0&&arr[1]==2||arr[6]==arr[3]&&arr[0]==0&&arr[6]==2||arr[8]==arr[4]&&arr[0]==0&&arr[8]==2)
    {
        cursorpos->x=150;
        cursorpos->y=140;
    }
else if(arr[0]==arr[2]&&arr[1]==0&&arr[0]==2||arr[4]==arr[7]&&arr[1]==0&&arr[7]==2)
    {
        cursorpos->x=250;
        cursorpos->y=140;
    }
else if(arr[0]==arr[6]&&arr[3]==0&&arr[0]==2||arr[4]==arr[5]&&arr[3]==0&&arr[4]==2)
    {
        cursorpos->x=150;
        cursorpos->y=230;
    }
else if(arr[1]==arr[7]&&arr[4]==0&&arr[1]==2||arr[3]==arr[5]&&arr[4]==0&&arr[3]==2||arr[6]==arr[2]&&arr[4]==0&&arr[6]==2||arr[0]==arr[8]&&arr[4]==0&&arr[8]==2)
{
    cursorpos->x=280;
    cursorpos->y=230;
}
else if(arr[3]==arr[4]&&arr[5]==0&&arr[3]==2||arr[2]==arr[8]&&arr[5]==0&&arr[2]==2)
{
    cursorpos->x=440;
    cursorpos->y=230;
}
else if(arr[0]==arr[3]&&arr[6]==0&&arr[0]==2||arr[7]==arr[8]&&arr[6]==0&&arr[7]==2||arr[4]==arr[2]&&arr[6]==0&&arr[4]==2)
{
    cursorpos->x=180;
    cursorpos->y=280;
}
else if(arr[1]==arr[4]&&arr[7]==0&&arr[1]==2||arr[6]==arr[8]&&arr[7]==0&&arr[8]==2)
{
    cursorpos->x=280;
    cursorpos->y=280;
}
else if(arr[0]==arr[4]&&arr[8]==0&&arr[0]==2||arr[2]==arr[5]&&arr[8]==0&&arr[2]==2||arr[6]==arr[7]&&arr[8]==0&&arr[6]==2)
{
    cursorpos->x=380;
    cursorpos->y=280;
}
else
    return 0;
    return 1;
}
void front_look(POINT *cursorpos)
{
    setbkcolor(12);
    cleardevice();
         setlinestyle(SOLID_LINE,0,3);
     settextstyle(BOLD_FONT,HORIZ_DIR,4);
    setcolor(RED);
     outtextxy(180,20,"Tic Tac Toe AI");
    setcolor(LIGHTBLUE);
     rectangle(20,80,270,140);
    rectangle(20,160,270,220);
    rectangle(20,240,270,300);
    setcolor(YELLOW);
outtextxy(120,100,"Play");
outtextxy(22,180,"Fastest first");
outtextxy(100,260,"Exit");
while(1)
{
    if(GetAsyncKeyState(VK_LBUTTON))
    {
        GetCursorPos(cursorpos);
        if(cursorpos->x-5>=20&&cursorpos->x-5<=270&&cursorpos->y-35>=80&&cursorpos->y-35<=140)
        {
            setbkcolor(BLACK);
            c=1;
            toss(cursorpos);
        }
        else if(cursorpos->x-5>=20&&cursorpos->x-5<=270&&cursorpos->y-35>=160&&cursorpos->y-35<=220)
        {
           setbkcolor(BLACK);
            c=2;
           display(cursorpos,1);
        }
        else if(cursorpos->x-5>=20&&cursorpos->x-5<=270&&cursorpos->y-35>=240&&cursorpos->y-35<=300)
    {
        exit(1);
    }
    }
}
}
int Generate_Ques(void)
{
    int a,b,c,choice,data=0,t,x=0;
    int time_spent=0,temp;
    char time_left[3];
    char str[3],s[3];
    srand(time(0));
    a=rand()%51+11;
    srand(time(0));
    b=rand()%11+10;
    choice=rand()%3;
    setbkcolor(12);
    rectangle(200,360,360,420);

    if(choice==1){
    c=a*b;
    outtextxy(255,370,"*");
    }
    else if(choice==0)
    {
        c=a+b;
        outtextxy(255,370,"+");
    }
    else if(choice==2)
    {
        outtextxy(255,370,"-");
        c=(a>b?a:b)-(a>b?b:a);
    }
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
     sprintf(str,"%d",a);
    outtextxy(205,370,str);
    sprintf(str,"%d",b);
    outtextxy(300,370,str);
    while(1)
    {
        if(time_spent%1000==0){
setcolor(BLACK);
setbkcolor(BLACK);
    outtextxy(30,50,time_left);
setcolor(WHITE);
    sprintf(time_left,"%d",5-(time_spent/1000));
    outtextxy(30,50,time_left);
  if(time_spent/1000==5){
delay(200);
if(data!=0){
setcolor(12);
setbkcolor(12);
outtextxy(255,370,"+");
sprintf(str,"%d",a);
outtextxy(205,370,str);
sprintf(str,"%d",b);
outtextxy(300,370,str);
sprintf(s,"%d",data);
outtextxy(380,370,s);}
setcolor(LIGHTBLUE);
setbkcolor(BLACK);

return 2;
}
}

if(kbhit())
{ setbkcolor(12);
    t=getch();
    sprintf(s,"%d",t-48);
    setcolor(LIGHTBLUE);
    outtextxy(380+x,370,s);
    data=data*10+(t-48);
    if(data==c){
delay(200);
setcolor(12);
setbkcolor(12);
outtextxy(255,370,"+");
sprintf(str,"%d",a);
outtextxy(205,370,str);
sprintf(str,"%d",b);
outtextxy(300,370,str);
sprintf(s,"%d",data);
outtextxy(380,370,s);
     setcolor(LIGHTBLUE);
     setbkcolor(BLACK);
        return 1;
    }
        x+=25;
}
delay(100);
time_spent+=100;
    }
}
