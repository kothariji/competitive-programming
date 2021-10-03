 #include<stdio.h>
#include<graphics.h>
int bk=0;
struct node
{
    int color;
    int x1,x2,y1,y2;
    struct node *next;
};
void check_color(POINT *cursor_pos);
void pencil(POINT *cursor_pos,struct node **Start);
void identify_shape(POINT *cursorpos,struct node **Start);
void put(struct node **Start,int x1,int y1,int x2,int y2,int color);
void make_circle(POINT *cursor_pos,struct node **Start);
void make_rectangle(POINT *cursor_pos,struct node **Start);
void make_line(POINT *cursor_pos,struct node **Start);
void text(POINT *cursor_pos,struct node **Start);
void checkshape(POINT *cursor_pos,struct node *Start);
void fil(POINT *cursor_pos,struct node **Start);
void set_panel(void);
void triangle(POINT *cursor_pos,struct node **Start);
void right_angle(POINT *cursor_pos,struct node **Start);
void rem_pre(void);
void diamond(POINT *cursor_pos,struct node **Start);
void cube(POINT *cursor_pos,struct node **Start);
void cylinder(POINT *cursor_pos,struct node **Start);
void hori_arrow(POINT *cursor_pos,struct node **Start);
void cone(POINT *cursor_pos,struct node **Start);
void hori_symetric(POINT *cursor_pos,struct node **Start);
void verti_symetric(POINT *cursor_pos,struct node **Start);
main()
{
struct node *Start=NULL;
int gd=0,gm;
initgraph(&gd,&gm,"");
put(&Start,0,0,getmaxx(),getmaxy(),WHITE);
POINT cursor_pos;
set_panel();
pencil(&cursor_pos,&Start);
    closegraph();
}
void check_color(POINT *cursor_pos)
{
    GetCursorPos(cursor_pos);
    if(cursor_pos->x-5>=0&&cursor_pos->x-5<=30&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
        setcolor(0);
    else if(cursor_pos->x-5>=40&&cursor_pos->x-5<=70&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
        setcolor(1);
     else if(cursor_pos->x-5>=80&&cursor_pos->x-5<=110&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
        setcolor(2);
      else if(cursor_pos->x-5>=120&&cursor_pos->x-5<=150&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
        setcolor(3);
       else if(cursor_pos->x-5>=160&&cursor_pos->x-5<=190&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
        setcolor(4);
         else if(cursor_pos->x-5>=200&&cursor_pos->x-5<=230&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
setcolor(5);
 else if(cursor_pos->x-5>=240&&cursor_pos->x-5<=270&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
    setcolor(6);
  else if(cursor_pos->x-5>=280&&cursor_pos->x-5<=310&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
    setcolor(7);
   else if(cursor_pos->x-5>=320&&cursor_pos->x-5<=350&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
setcolor(8);
 else if(cursor_pos->x-5>=360&&cursor_pos->x-5<=390&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
setcolor(9);
 else if(cursor_pos->x-5>=400&&cursor_pos->x-5<=430&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
setcolor(10);
 else if(cursor_pos->x-5>=440&&cursor_pos->x-5<=470&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
    setcolor(11);
  else if(cursor_pos->x-5>=480&&cursor_pos->x-5<=510&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
setcolor(12);
 else if(cursor_pos->x-5>=520&&cursor_pos->x-5<=550&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
setcolor(13);
 else if(cursor_pos->x-5>=560&&cursor_pos->x-5<=590&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
setcolor(14);
 else if(cursor_pos->x-5>=600&&cursor_pos->x-5<=630&&cursor_pos->y-35>=10&&cursor_pos->y-35<=65)
setcolor(15);
}
void identify_shape(POINT *cursorpos,struct node **Start)
{

    GetCursorPos(cursorpos);
    delay(10);
if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=45&&cursorpos->y-35<=80){
        pencil(cursorpos,Start);
}
else if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=85&&cursorpos->y-35<=120)
{
fil(cursorpos,Start);
}
    else if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=125&&cursorpos->y-35<=160){

        text(cursorpos,Start);
        }
    else if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=165&&cursorpos->y-35<=200){

    writeimagefile("paint with ug.jpeg");
    }
 else if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=205&&cursorpos->y-35<=240){

 make_line(cursorpos,Start);
 }
else if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=245&&cursorpos->y-35<=280){

make_rectangle(cursorpos,Start);
}
else if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=285&&cursorpos->y-35<=320){

make_circle(cursorpos,Start);

}
else if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=325&&cursorpos->y-35<=360)
{
    cleardevice();
    bk=0;
    setbkcolor(0);
    set_panel();

}
else if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=365&&cursorpos->y-35<=400){

cleardevice();
set_panel();
    readimagefile("paint with ug.jpeg",80,80,600,500);
}
else if(cursorpos->x-5>=0&&cursorpos->x-5<=40&&cursorpos->y-35>=405&&cursorpos->y-35<=440){

    triangle(cursorpos,Start);
    }
    else if(cursorpos->x-5>=45&&cursorpos->x-5<=85&&cursorpos->y-35>=45&&cursorpos->y-35<=80){

        right_angle(cursorpos,Start);
        }
else if(cursorpos->x-5>=45&&cursorpos->x-5<=85&&cursorpos->y-35>=85&&cursorpos->y-35<=120)
    diamond(cursorpos,Start);
else if(cursorpos->x-5>=45&&cursorpos->x-5<=85&&cursorpos->y-35>=125&&cursorpos->y-35<=160)
        cube(cursorpos,Start);
else if(cursorpos->x-5>=45&&cursorpos->x-5<=85&&cursorpos->y-35>=165&&cursorpos->y-35<=200)
cylinder(cursorpos,Start);
else if(cursorpos->x-5>=45&&cursorpos->x-5<=85&&cursorpos->y-35>=205&&cursorpos->y-35<=240)
  hori_arrow(cursorpos,Start);
else if(cursorpos->x-5>=45&&cursorpos->x-5<=85&&cursorpos->y-35>=245&&cursorpos->y-35<=280)
   cone(cursorpos,Start);
else if(cursorpos->x-5>=45&&cursorpos->x-5<=85&&cursorpos->y-35>=285&&cursorpos->y-35<=320)
hori_symetric(cursorpos,Start);
else if(cursorpos->x-5>=45&&cursorpos->x-5<=85&&cursorpos->y-35>=325&&cursorpos->y-35<=365)
verti_symetric(cursorpos,Start);
}
void pencil(POINT *cursor_pos,struct node **Start)
{
    int x1,y1;
while(1)
{
       if(GetAsyncKeyState(VK_TAB))
 identify_shape(cursor_pos,Start);
     else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);
          else if(GetAsyncKeyState(VK_LBUTTON))
    {
        GetCursorPos(cursor_pos);
        x1=cursor_pos->x;
        y1=cursor_pos->y;
        putpixel(x1-5,y1-22,getcolor());
        putpixel(x1-5,y1-24,getcolor());
        putpixel(x1-6,y1-23,getcolor());
        putpixel(x1-4,y1-22,getcolor());
        putpixel(x1-5,y1-23,getcolor());
    put(Start,x1-20,y1-20,x1+20,y1+20,getcolor());
    }
}
}

void put(struct node **Start,int x1,int y1,int x2,int y2,int color)
{ struct node *temp,*t;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->color=color;
    temp->next=NULL;
    temp->x1=x1;
    temp->x2=x2;
    temp->y1=y1;
    temp->y2=y2;
    if(*Start==NULL)
        *Start=temp;
        else
        {
            temp->next=*Start;
            *Start=temp;
        }
}
void make_circle(POINT *cursor_pos,struct node **Start)
{ int color;
     int i=0,j=0,x1,y1,x2,y2,x,y;
     while(1)
     {
           if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
          else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);
        else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    {
        GetCursorPos(cursor_pos);
        x1=cursor_pos->x-5;
        y1=cursor_pos->y-25;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    { if(0<j){
        color=getcolor();
        setcolor(bk);
        //circle(x1+(x2-x1)/2,y1+(y2-y1)/2,((x2-x1)/2));
        ellipse(x2-(x2-x1),y2-(y2-y1),0,360,x2-x1,y2-y1);
        setcolor(color);
        }
                 GetCursorPos(cursor_pos);
          x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
      //  circle(x1+(x2-x1)/2,y1+(y2-y1)/2,((x2-x1)/2));
        ellipse(x2-(x2-x1),y2-(y2-y1),0,360,x2-x1,y2-y1);

        j++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    { setcolor(bk);
        //circle(x1+(x2-x1)/2,y1+(y2-y1)/2,((x2-x1)/2));
        ellipse(x2-(x2-x1),y2-(y2-y1),0,360,x2-x1,y2-y1);

        setcolor(color);
        GetCursorPos(cursor_pos);
          x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        setcolor(color);
        ellipse(x2-(x2-x1),y2-(y2-y1),0,360,x2-x1,y2-y1);
      //  circle(x1+(x2-x1)/2,y1+(y2-y1)/2,((x2-x1)/2));
put(Start,x1,y1,x2,y2,getcolor());
        i=0;j=0;
    }
    delay(50);
     }
}
void make_rectangle(POINT *cursor_pos,struct node **Start)
{    int color;
     int i=0,y=0,x1,x2,y1,y2;
     while(1)
     {
         GetCursorPos(cursor_pos);
         if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
        else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);

         else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    {
        x1=cursor_pos->x-5;
        y1=cursor_pos->y-25;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    {  if(y>0){
        color=getcolor();
        setcolor(bk);
       rectangle(x1,y1,x2,y2);
     setcolor(color);
    }
    GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        rectangle(x1,y1,x2,y2);
    y++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    {
        setcolor(bk);
        rectangle(x1,y1,x2,y2);
        setcolor(color);
        GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        i++;
    }
    if(i==2){
            setcolor(bk);
     rectangle(x1,y1,x2,y2);
    setcolor(color);
       rectangle(x1,y1,x2,y2);
       put(Start,x1,y1,x2,y2,getcolor());
    i=0;
    y=0;}
    delay(50);

    }

}
void right_angle(POINT *cursor_pos,struct node **Start)
{    int color;
     int i=0,y=0,x1,x2,y1,y2;
     while(1)
     {
         GetCursorPos(cursor_pos);
         if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
        else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);

         else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    {
        x1=cursor_pos->x-5;
        y1=cursor_pos->y-25;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    {  if(y>0){
        color=getcolor();
        setcolor(bk);
        line(x1,y1,x2,y2);
      line(x1,y1,x1,y2);
      line(x1,y2,x2,y2);
        setcolor(color);
    }
    GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
       line(x1,y1,x2,y2);
      line(x1,y1,x1,y2);
      line(x1,y2,x2,y2);
    y++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    {
        setcolor(bk);
        line(x1,y1,x2,y2);
      line(x1,y1,x1,y2);
      line(x1,y2,x2,y2);
        setcolor(color);
        GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        i++;
    }
    if(i==2){
            setcolor(bk);
      line(x1,y1,x2,y2);
      line(x1,y1,x1,y2);
      line(x1,y2,x2,y2);
    setcolor(color);
       line(x1,y1,x2,y2);
      line(x1,y1,x1,y2);
      line(x1,y2,x2,y2);
      if(x2-x1>0&&y2-y1>0)
       put(Start,x1,y1,x2,y2,getcolor());
       else if(x2-x1<0&&y2-y1>0)
        put(Start,x2,y1,x1,y2,getcolor());
              else if(x2-x1>0&&y2-y1<0)
       put(Start,x1,y2,x2,y1,getcolor());
       else if(x2-x1<0&&y2-y1<0)
        put(Start,x2,y2,x1,y1,getcolor());
    i=0;
    y=0;}
    delay(50);

    }

}
void make_line(POINT *cursor_pos,struct node **Start)
{ int i=0,x1,x2,y1,y2,color;
    while(1)
{ color=getcolor();
  GetCursorPos(cursor_pos);
  if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
    else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);
    else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    { line(x1-5,y1-20,x2-5,y2-20);
        x1=cursor_pos->x;
        y1=cursor_pos->y;
        i++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    {
        setcolor(bk);

      line(x1-5,y1-20,x2-5,y2-20);
     setcolor(color);
        GetCursorPos(cursor_pos);
        x2=cursor_pos->x;
        y2=cursor_pos->y;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    { setcolor(bk);
     line(x1-5,y1-20,x2-5,y2-20);
     setcolor(color);
              GetCursorPos(cursor_pos);
        x2=cursor_pos->x;
        y2=cursor_pos->y;
           line(x1-5,y1-20,x2-5,y2-20);
    }
 if(i==2){
            setcolor(bk);
     line(x1-5,y1-20,x2-5,y2-20);
    setcolor(color);
        line(x1-5,y1-20,x2-5,y2-20);
        put(Start,x1-20,y1-20,x1+20,y2+20,getcolor());
    i=0;
    }
    delay(50);
    }
}
void text(POINT *cursor_pos,struct node **Start)
{ char text[60],ch;
int i=0,x,y,color;
     settextstyle(BOLD_FONT,HORIZ_DIR,2);
   if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
 else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);
setbkcolor(bk);
     outtextxy(580,240,"Text");
    while(1)
    {
        ch=getch();
        if(ch==13)
           {
               text[i]=NULL;
               break;
           }
           text[i]=ch;

        i++;
    }
    outtextxy(550,280,text);
    outtextxy(500,300,"enter x & y axis");
 while(1){
        if(GetAsyncKeyState(VK_LBUTTON)){
GetCursorPos(cursor_pos);
    outtextxy(cursor_pos->x-5,cursor_pos->y-35,text);
    color=getcolor();
     setcolor(bk);
     setbkcolor(bk);
     outtextxy(550,240,"Enter text");
     outtextxy(550,280,text);
    outtextxy(500,300,"enter x & y axis");
    setcolor(color);

    break;}
    }
    pencil(cursor_pos,Start);
}
void checkshape(POINT *cursor_pos,struct node *Start)
{
    while(Start!=NULL)
    {
        if(Start->x1<=cursor_pos->x&&Start->x2>=cursor_pos->x&&Start->y1<=cursor_pos->y&&Start->y2>=cursor_pos->y)
    {
        if(Start->x1<=0&&Start->x2>=getmaxx()&&Start->y1<=0&&Start->y2>=getmaxy())
        bk=getcolor();
        setfillstyle(SOLID_FILL,getcolor());
        floodfill(cursor_pos->x-5,cursor_pos->y-25,Start->color);
        break;
    }
    Start=Start->next;
    }

}
void fil(POINT *cursor_pos,struct node **Start)
{
    while(1)
    {
          if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
         else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);
        else if(GetAsyncKeyState(VK_LBUTTON))
        {
            GetCursorPos(cursor_pos);
            checkshape(cursor_pos,*Start);
        }
    }
}
void set_panel(void)
{ int i=0,x=0;
setcolor(WHITE);
//pencil
rectangle(0,45,40,80);
line(30,50,30,65);
line(15,50,15,65);
line(30,65,25,70);
line(15,65,25,70);
line(27,65,15,65);
line(30,50,15,50);
//fill
       rectangle(0,85,40,120);
       setfillstyle(SOLID_FILL,YELLOW);
ellipse(20,100,0,360,8,4);
ellipse(20,100,0,180,8,8);
floodfill(20,100,WHITE);

line(12,100,12,115);
line(28,100,28,115);
line(12,115,28,115);
//Text
rectangle(0,125,40,160);
settextstyle(BOLD_FONT,HORIZ_DIR,4);
outtextxy(8,126,"A");
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
 //Save
rectangle(0,165,40,200);
rectangle(10,170,30,195);
line(10,170,15,178);
line(30,170,25,178);
line(15,178,25,178);
line(15,184,25,184);
line(15,188,25,188);
line(15,192,25,192);
//Line
rectangle(0,205,40,240);
line(10,210,25,230);
//rectangle
rectangle(0,245,40,280);
rectangle(5,255,35,270);
//circle
rectangle(0,285,40,320);
circle(20,302,15);
//Clear
rectangle(0,325,40,360);
setfillstyle(SOLID_FILL,WHITE);
rectangle(10,335,30,350);
floodfill(20,340,WHITE);
//Load
rectangle(0,365,40,400);
rectangle(5,370,25,395);
setlinestyle(0,0,3);
line(20,380,38,380);
line(20,380,28,375);
line(20,380,28,385);
setlinestyle(0,0,1);
//Triangle
rectangle(0,405,40,440);
        line(20,410,28,430);
        line(20,410,12,430);
        line(12,430,28,430);
        //right angled triangle
rectangle(45,45,85,80);
line(50,50,50,75);
line(50,50,75,75);
line(50,75,75,75);
//Diamond
rectangle(45,85,85,120);
line(65,90,80,100);
line(65,90,50,100);
line(50,100,65,115);
line(80,100,65,115);
//Cube
rectangle(45,125,85,160);
rectangle(55,135,75,150);
rectangle(65,142,80,155);
line(55,135,65,142);
line(75,150,80,155);
line(75,135,80,142);
line(55,150,65,155);
//cylinder
rectangle(45,165,85,200);
ellipse(65,170,0,360,10,4);
line(55,170,55,190);
line(75,170,75,190);
ellipse(65,190,0,360,10,4);
//hori_arrow
rectangle(45,205,85,240);
line(50,216,58,216);
line(50,216,50,226);
line(50,226,58,226);
line(58,216,58,212);
line(58,226,58,230);
line(58,230,75,220);
line(58,212,75,220);
//cone
rectangle(45,245,85,280);
line(65,250,50,270);
line(65,250,80,270);
ellipse(65,270,0,360,15,7);
//hori_symetric
rectangle(45,285,85,320);
setlinestyle(DOTTED_LINE,0,1);
line(45,303,85,303);
setlinestyle(SOLID_LINE,0,1);
//verti_symetric
rectangle(45,325,85,365);
setlinestyle(DOTTED_LINE,0,1);
line(65,325,65,365);
setlinestyle(SOLID_LINE,0,1);
while(i<16)
{
    setfillstyle(SOLID_FILL,i);
    rectangle(x,10,x+30,40);
    floodfill(x+2,14,WHITE);
    x=x+40;
    i++;
}
}
void triangle(POINT *cursor_pos,struct node **Start)
{    int color;
     int i=0,y=0,x1,x2,y1,y2;
     while(1)
     {
         GetCursorPos(cursor_pos);
         if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
        else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);

         else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    {
        x1=cursor_pos->x;
        y1=cursor_pos->y;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    {  if(y>0){
        color=getcolor();
        setcolor(bk);
        line(x1,y1,x1-(x2-x1),y2);
        line(x1,y1,x1+(x2-x1),y2);
        line(x1-(x2-x1),y2,x2,y2);
        setcolor(color);
    }
    GetCursorPos(cursor_pos);
        x2=cursor_pos->x;
        y2=cursor_pos->y;
 line(x1,y1,x1-(x2-x1),y2);
        line(x1,y1,x1+(x2-x1),y2);
        line(x1-(x2-x1),y2,x2,y2);
    y++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    {
        setcolor(bk);
        line(x1,y1,x1-(x2-x1),y2);
        line(x1,y1,x1+(x2-x1),y2);
        line(x1-(x2-x1),y2,x2,y2);

        setcolor(color);
        GetCursorPos(cursor_pos);
        x2=cursor_pos->x;
        y2=cursor_pos->y;
        i++;
    }
    if(i==2){

 line(x1,y1,x1-(x2-x1),y2);
        line(x1,y1,x1+(x2-x1),y2);
        line(x1-(x2-x1),y2,x2,y2);

if(x2-x1>0&&y2-y1>0)
    put(Start,x1,y1,x2,y2,getcolor());
    else if(x2-x1<0&&y2-y1>0)
        put(Start,x2,y1,x1,y2,getcolor());
        else if(x2-x1<0&&y2-y1<0)
            put(Start,x2,y2,x1,y1,getcolor());
    i=0;
    y=0;}
    delay(50);

    }

}
void diamond(POINT *cursor_pos,struct node **Start)
{    int color;
     int i=0,y=0,x1,x2,y1,y2;
     while(1)
     {
         GetCursorPos(cursor_pos);
         if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
        else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);

         else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    {
        x1=cursor_pos->x-5;
        y1=cursor_pos->y-25;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    {  if(y>0){
        color=getcolor();
        setcolor(bk);
        line(x1,y1,x1-(x2-x1),y2);
 line(x1,y1,x1+(x2-x1),y2);
line(x2,y2,x1,y2+(y2-y1));
line(x1-(x2-x1),y2,x1,y2+(y2-y1));
     setcolor(color);
    }
    GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        line(x1,y1,x1-(x2-x1),y2);
 line(x1,y1,x1+(x2-x1),y2);
line(x2,y2,x1,y2+(y2-y1));
line(x1-(x2-x1),y2,x1,y2+(y2-y1));

    y++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    {
        setcolor(bk);
 line(x1,y1,x1-(x2-x1),y2);
 line(x1,y1,x1+(x2-x1),y2);
line(x2,y2,x1,y2+(y2-y1));
line(x1-(x2-x1),y2,x1,y2+(y2-y1));
        setcolor(color);
        GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        i++;
    }
    if(i==2){
            setcolor(bk);
 line(x1,y1,x1-(x2-x1),y2);
 line(x1,y1,x1+(x2-x1),y2);
line(x2,y2,x1,y2+(y2-y1));
line(x1-(x2-x1),y2,x1,y2+(y2-y1));
    setcolor(color);
 line(x1,y1,x1-(x2-x1),y2);
 line(x1,y1,x1+(x2-x1),y2);
line(x2,y2,x1,y2+(y2-y1));
line(x1-(x2-x1),y2,x1,y2+(y2-y1));
          if(x2-x1>0&&y2-y1>0)
       put(Start,x1,y1,x2,y2,getcolor());
       else if(x2-x1<0&&y2-y1>0)
        put(Start,x2,y1,x1,y2,getcolor());
              else if(x2-x1>0&&y2-y1<0)
       put(Start,x1,y2,x2,y1,getcolor());
       else if(x2-x1<0&&y2-y1<0)
        put(Start,x2,y2,x1,y1,getcolor());
    i=0;
    y=0;}
    delay(50);

    }

}
void cube(POINT *cursor_pos,struct node **Start)
{    int color;
     int i=0,y=0,x1,x2,y1,y2;
     while(1)
     {
         GetCursorPos(cursor_pos);
         if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
        else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);

         else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    {
        x1=cursor_pos->x-5;
        y1=cursor_pos->y-25;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    {  if(y>0){
        color=getcolor();
        setcolor(bk);
rectangle(x1,y1,x2-(((x2-x1)/2)/2),y2-(((y2-y1)/2)/2));
rectangle(x1+(((x2-x1)/2)/2),y1+(((y2-y1)/2)/2),x2,y2);
line(x1,y1,x1+(((x2-x1)/2)/2),y1+(((y2-y1)/2)/2));
line(x2-(((x2-x1)/2)/2),y2-(((y2-y1)/2)/2),x2,y2);
    line(x2-(((x2-x1)/2)/2),y1,x2,y1+(((y2-y1)/2)/2));
    line(x1,y2-(((y2-y1)/2)/2),x1+(((x2-x1)/2)/2),y2);
     setcolor(color);
    }
    GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
rectangle(x1,y1,x2-(((x2-x1)/2)/2),y2-(((y2-y1)/2)/2));
rectangle(x1+(((x2-x1)/2)/2),y1+(((y2-y1)/2)/2),x2,y2);
line(x1,y1,x1+(((x2-x1)/2)/2),y1+(((y2-y1)/2)/2));
line(x2-(((x2-x1)/2)/2),y2-(((y2-y1)/2)/2),x2,y2);
    line(x2-(((x2-x1)/2)/2),y1,x2,y1+(((y2-y1)/2)/2));
 line(x1,y2-(((y2-y1)/2)/2),x1+(((x2-x1)/2)/2),y2);
     y++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    {
        setcolor(bk);
 rectangle(x1,y1,x2-(((x2-x1)/2)/2),y2-(((y2-y1)/2)/2));
rectangle(x1+(((x2-x1)/2)/2),y1+(((y2-y1)/2)/2),x2,y2);
line(x1,y1,x1+(((x2-x1)/2)/2),y1+(((y2-y1)/2)/2));
        line(x2-(((x2-x1)/2)/2),y2-(((y2-y1)/2)/2),x2,y2);
    line(x2-(((x2-x1)/2)/2),y1,x2,y1+(((y2-y1)/2)/2));
 line(x1,y2-(((y2-y1)/2)/2),x1+(((x2-x1)/2)/2),y2);
        setcolor(color);
        GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        i++;
    }
    if(i==2){
            setcolor(bk);
setcolor(color);
 rectangle(x1,y1,x2-(((x2-x1)/2)/2),y2-(((y2-y1)/2)/2));
rectangle(x1+(((x2-x1)/2)/2),y1+(((y2-y1)/2)/2),x2,y2);
line(x1,y1,x1+(((x2-x1)/2)/2),y1+(((y2-y1)/2)/2));
    line(x2-(((x2-x1)/2)/2),y2-(((y2-y1)/2)/2),x2,y2);
    line(x2-(((x2-x1)/2)/2),y1,x2,y1+(((y2-y1)/2)/2));
 line(x1,y2-(((y2-y1)/2)/2),x1+(((x2-x1)/2)/2),y2);
   put(Start,x1,y1,x2,y2,getcolor());
    i=0;
    y=0;
    }
    delay(50);

    }

}
void cylinder(POINT *cursor_pos,struct node **Start)
{    int color;
     int i=0,y=0,x1,x2,y1,y2;
     while(1)
     {
         GetCursorPos(cursor_pos);
         if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
        else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);

         else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    {
        x1=cursor_pos->x-5;
        y1=cursor_pos->y-25;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    {  if(y>0){
        color=getcolor();
        setcolor(bk);
        ellipse(x2-(x2-x1),y2-(y2-y1),0,360,x2-x1,(y2-y1)/4);
  line(x1+(x2-x1),y1,x2,y2);
   line(x1-(x2-x1),y1,x1-(x2-x1),y2);
    ellipse(x2-(x2-x1),y2,0,360,x2-x1,(y2-y1)/4);
     setcolor(color);
    }
    GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        ellipse(x2-(x2-x1),y2-(y2-y1),0,360,x2-x1,(y2-y1)/4);
  line(x1+(x2-x1),y1,x2,y2);
   line(x1-(x2-x1),y1,x1-(x2-x1),y2);
   ellipse(x2-(x2-x1),y2,0,360,x2-x1,(y2-y1)/4);

    y++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    {
        setcolor(bk);
        ellipse(x2-(x2-x1),y2-(y2-y1),0,360,x2-x1,(y2-y1)/4);
         line(x1+(x2-x1),y1,x2,y2);
   line(x1-(x2-x1),y1,x1-(x2-x1),y2);
   ellipse(x2-(x2-x1),y2,0,360,x2-x1,(y2-y1)/4);

        setcolor(color);
        GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        i++;
    }
    if(i==2){
        setcolor(bk);
        ellipse(x2-(x2-x1),y2-(y2-y1),0,360,x2-x1,(y2-y1)/4);
  line(x1+(x2-x1),y1,x2,y2);
   line(x1-(x2-x1),y1,x1-(x2-x1),y2);
   ellipse(x2-(x2-x1),y2,0,360,x2-x1,(y2-y1)/4);

setcolor(color);
        ellipse(x2-(x2-x1),y2-(y2-y1),0,360,x2-x1,(y2-y1)/4);
  line(x1+(x2-x1),y1,x2,y2);
   line(x1-(x2-x1),y1,x1-(x2-x1),y2);
    ellipse(x2-(x2-x1),y2,0,360,x2-x1,(y2-y1)/4);

       put(Start,x1-(x2-x1),y1-(y2-y1)/4,x2,y2+(y2-y1)/4,getcolor());
    i=0;
    y=0;}
    delay(50);

    }

}
void hori_arrow(POINT *cursor_pos,struct node **Start)
{
     int color;
     int i=0,y=0,x1,x2,y1,y2;
     while(1)
     {
         GetCursorPos(cursor_pos);
         if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
        else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);

         else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    {
        x1=cursor_pos->x-5;
        y1=cursor_pos->y-25;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    {  if(y>0){
        color=getcolor();
        setcolor(bk);
  line(x1,y1,x1+(x2-x1)/2,y1);
  line(x1,y1,x1,y2+(y2-y1));
  line(x1,y2+(y2-y1),x1+(x2-x1)/2,y2+(y2-y1));
  line(x1+(x2-x1)/2,y1,x1+(x2-x1)/2,y1-(y2-y1)/1.5);
line(x1+(x2-x1)/2,y2+(y2-y1),x1+(x2-x1)/2,y2+(y2-y1)*1.75);
line(x1+(x2-x1)/2,y2+(y2-y1)*1.75,x2,y2);
line(x1+(x2-x1)/2,y1-(y2-y1)/1.5,x2,y2);
     setcolor(color);
    }
    GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
 line(x1,y1,x1+(x2-x1)/2,y1);
  line(x1,y1,x1,y2+(y2-y1));
  line(x1,y2+(y2-y1),x1+(x2-x1)/2,y2+(y2-y1));
  line(x1+(x2-x1)/2,y1,x1+(x2-x1)/2,y1-(y2-y1)/1.5);
line(x1+(x2-x1)/2,y2+(y2-y1),x1+(x2-x1)/2,y2+(y2-y1)*1.75);
line(x1+(x2-x1)/2,y2+(y2-y1)*1.75,x2,y2);
line(x1+(x2-x1)/2,y1-(y2-y1)/1.5,x2,y2);
  y++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    {
        setcolor(bk);
       line(x1,y1,x1+(x2-x1)/2,y1);
  line(x1,y1,x1,y2+(y2-y1));
  line(x1,y2+(y2-y1),x1+(x2-x1)/2,y2+(y2-y1));
  line(x1+(x2-x1)/2,y1,x1+(x2-x1)/2,y1-(y2-y1)/1.5);
line(x1+(x2-x1)/2,y2+(y2-y1),x1+(x2-x1)/2,y2+(y2-y1)*1.75);
line(x1+(x2-x1)/2,y2+(y2-y1)*1.75,x2,y2);
line(x1+(x2-x1)/2,y1-(y2-y1)/1.5,x2,y2);
        setcolor(color);
        GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        i++;
    }
    if(i==2){
setcolor(color);
 line(x1,y1,x1+(x2-x1)/2,y1);
  line(x1,y1,x1,y2+(y2-y1));
  line(x1,y2+(y2-y1),x1+(x2-x1)/2,y2+(y2-y1));
  line(x1+(x2-x1)/2,y1,x1+(x2-x1)/2,y1-(y2-y1)/1.5);
line(x1+(x2-x1)/2,y2+(y2-y1),x1+(x2-x1)/2,y2+(y2-y1)*1.75);
line(x1+(x2-x1)/2,y2+(y2-y1)*1.75,x2,y2);
line(x1+(x2-x1)/2,y1-(y2-y1)/1.5,x2,y2);
        if(x2-x1>0){
       put(Start,x1,y1-(y2-y1),x2,y2+(y2-y1),getcolor());
    }
       else
       put(Start,x2,y1-(y2-y1),x1,y2+(y2-y1),getcolor());

    i=0;
    y=0;}
    delay(50);

    }

}
void cone(POINT *cursor_pos,struct node **Start)
{
     int color;
     int i=0,y=0,x1,x2,y1,y2;
     while(1)
     {
         GetCursorPos(cursor_pos);
         if(GetAsyncKeyState(VK_TAB))
            identify_shape(cursor_pos,Start);
        else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);

         else if(GetAsyncKeyState(VK_LBUTTON)&&i==0)
    {
        x1=cursor_pos->x-5;
        y1=cursor_pos->y-25;
        i++;
    }
    else if(GetAsyncKeyState(VK_LBUTTON))
    {  if(y>0){
        color=getcolor();
        setcolor(bk);
      line(x1,y1,x1-(x2-x1),y2);
      line(x1,y1,x1+(x2-x1),y2);
      ellipse(x1,y2,0,360,(x2-x1),(y2-y1)/4);
     setcolor(color);
    }
    GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
      line(x1,y1,x1-(x2-x1),y2);
      line(x1,y1,x1+(x2-x1),y2);
      ellipse(x1,y2,0,360,(x2-x1),(y2-y1)/4);

  y++;
    }
    else if(!GetAsyncKeyState(VK_LBUTTON)&&i==1)
    {
        setcolor(bk);
    line(x1,y1,x1-(x2-x1),y2);
      line(x1,y1,x1+(x2-x1),y2);
      ellipse(x1,y2,0,360,(x2-x1),(y2-y1)/4);
        setcolor(color);
        GetCursorPos(cursor_pos);
        x2=cursor_pos->x-5;
        y2=cursor_pos->y-25;
        i++;
    }
    if(i==2){
setcolor(color);
  line(x1,y1,x1-(x2-x1),y2);
      line(x1,y1,x1+(x2-x1),y2);
      ellipse(x1,y2,0,360,(x2-x1),(y2-y1)/4);

       put(Start,x1-(x2-x1),y1-(y2-y1),x2,y2+(y2-y1),getcolor());
    i=0;
    y=0;}
    delay(50);

    }

}
void hori_symetric(POINT *cursor_pos,struct node **Start)
{
   int x1,y1;
while(1)
{
       if(GetAsyncKeyState(VK_TAB))
 identify_shape(cursor_pos,Start);
     else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);
          else if(GetAsyncKeyState(VK_LBUTTON))
    {
        GetCursorPos(cursor_pos);
        x1=cursor_pos->x;
        y1=cursor_pos->y;
        putpixel(x1-5,y1-23,getcolor());
        putpixel(x1-5,y1-24,getcolor());
        putpixel(x1-6,y1-23,getcolor());
        putpixel(x1-4,y1-22,getcolor());
        putpixel(x1-5,y1-23,getcolor());
        putpixel((getmaxx()-x1)-5,y1-22,getcolor());
        putpixel((getmaxx()-x1)-5,y1-24,getcolor());
        putpixel((getmaxx()-x1)-4,y1-23,getcolor());
        putpixel((getmaxx()-x1)-6,y1-23,getcolor());
        putpixel((getmaxx()-x1)-5,y1-23,getcolor());
    put(Start,x1-20,y1-20,x1+20,y1+20,getcolor());
    }
}
}
void verti_symetric(POINT *cursor_pos,struct node **Start)
{
   int x1,y1;
while(1)
{
       if(GetAsyncKeyState(VK_TAB))
 identify_shape(cursor_pos,Start);
     else if(GetAsyncKeyState(VK_SHIFT))
            check_color(cursor_pos);
          else if(GetAsyncKeyState(VK_LBUTTON))
    {
        GetCursorPos(cursor_pos);
        x1=cursor_pos->x;
        y1=cursor_pos->y;
                putpixel(x1-5,y1-22,getcolor());
        putpixel(x1-5,y1-24,getcolor());
        putpixel(x1-6,y1-23,getcolor());
        putpixel(x1-4,y1-22,getcolor());
        putpixel(x1-5,y1-23,getcolor());
        putpixel(x1-5,(getmaxy()-y1)-22,getcolor());
        putpixel(x1-5,(getmaxy()-y1)-24,getcolor());
        putpixel(x1-4,(getmaxy()-y1)-23,getcolor());
        putpixel(x1-6,(getmaxy()-y1)-23,getcolor());
        putpixel(x1-5,(getmaxy()-y1)-23,getcolor());
    put(Start,x1-20,y1-20,x1+20,y1+20,getcolor());
    }
}
}
