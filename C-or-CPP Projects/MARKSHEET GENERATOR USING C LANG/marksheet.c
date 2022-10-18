#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int authenticate();
void input();
int calculations();
void show();
void UNIX();
void DBMS();
void CTP();
void WEBD();
void Prof_COMMUNICATION();
void result();
void remark();
int m,m1,n,n1,o,o1,p,p1,q1,q2,f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,t1,t2,t3,t4,t5,count=0;
float total,per;
 int dd,mm,yy;
char r[10] ;
char b[20],ch[40],a[50],e[38],d[30],grade,res[5],rem[16],q,x,y,u,v;
char s[] = "pass";
char s1[] = "fail";
char s3[] = "Congratulations";
char s4[] = " ";

int main(){
    int flag=0;
    flag=authenticate();
    if(flag)
    {
input();
calculations();
UNIX();
DBMS();
CTP();
WEBD();
Prof_COMMUNICATION();
result();
remark();
show();
    }
    else printf("\n\nInvalid roll id!!!");
return 0;
}
int authenticate(){
    char roll[60][20];
     char ch;
    FILE *fp;
    fp=fopen("ROLL.txt","r");
    if(fp==NULL)
    {
        printf("\n\nFailed to open authentication file!!!");
        exit(0);
    }

    int i=0,size;
    while(ch!=EOF)
    {
        fscanf(fp,"%s",roll[i]);
        ch=fgetc(fp);
        i++;
    }
    char id[20];
    printf("Enter your roll id (eg:LCS2021001) : ");
    scanf("%s",id);
    size=i-1;
    int l=0;
    int r=size;
    int found=0;
    int m=0;

    while(l<=r)
    {
        m=(l+r)/2;
        if(strcmp(id,roll[m])<0)
        r=m-1;
        else if(strcmp(id,roll[m]))
        l=m+1;
        else 
        return 1;
    }
    return 0;
}
void input(){
    getchar();
printf("Enter your name : ");
gets(ch);
printf("Enter place : ");
gets(b);
printf("Enter clg name : ");
gets(a);

valid:
     
    printf("Enter date (DD/MM/YYYY format): ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
     
    //check year
    if(yy>=1900 && yy<=2022)
    {
        //check month
        if(mm>=1 && mm<=12)
        {
            //check days
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
                printf("Date is valid.\n");
            else if((dd>=1 && dd<=28) && (mm==2))
                printf("Date is valid.\n");
            else if(dd==29 && mm==2 && (yy%400==0 ||(yy%4==0 && yy%100!=0)))
                printf("Date is valid.\n");
            else{
                printf("DOB is invalid.\n");
                goto valid;
            }
        }
        else
        {
            printf("DOB is not valid.\n");
            goto valid;
        }
    }
    else
    {
        printf("DOB is not valid.\n");
        goto valid;
    }

printf("Enter ROLL NO : ");
scanf("%s",&r);
   subject1:
  printf("\nEnter marks in SCRIPTING(UNIX) II ");
    scanf("%d",&m);
    if(m>80){
   printf("\nplz enter less than/equal to 80 ");
    goto subject1;}
    printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f1);
   { 
    if(f1==0) goto subject1;
  }
  subject1p:
  printf("\nEnter marks in SCRIPTING(UNIX) II practicals ");
    scanf("%d",&m1);
    if(m1>20){
   printf("\nplz enter less than/equal to 20 ");
    goto subject1p;
  }
   printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f2);
   { 
    if(f2==0) goto subject1p;
  }
   WEBD:
  printf("\nEnter marks in WEBD ");
    scanf("%d",&n);
    if(n>80){
   printf("\nplz enter less than/equal to 80 ");
    goto WEBD;
  }
   printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f3);
   { 
    if(f3==0) goto WEBD;
  }
  WEBDp:
  printf("\nEnter marks in WEBD (prac) ");
    scanf("%d",&n1);
    if(n1>20){
   printf("\nplz enter less than/equal to 20 ");
    goto WEBDp;
  }
   printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f4);
   { 
    if(f4==0) goto WEBDp;
  }
   CTP:
  printf("\nEnter marks in CTP ");
    scanf("%d",&o);
    if(o>80){
   printf("\nplz enter less than/equal to 80 ");
    goto CTP;
  }
   printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f5);
   { 
    if(f5==0) goto CTP;
  }
    ctp_p:
  printf("\nEnter marks in CTP(prac) ");
    scanf("%d",&o1);
    if(o1>20){
   printf("\nplz enter less than/equal to 20 ");
    goto ctp_p;
  }
   printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f6);
   { 
    if(f6==0) goto ctp_p;
  }
   DBMS:
  printf("\nEnter marks in Database management system ");
    scanf("%d",&p);
    if(p>80){
   printf("\nplz enter less than/equal to 80 ");
    goto DBMS;
  }
   printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f7);
   { 
    if(f7==0) goto DBMS;
  }
  DBMS_p:
  printf("\nEnter marks in Database management system Practical ");
    scanf("%d",&p1);
    if(p1>20){
   printf("\nplz enter less than/equal to 20 ");
    goto DBMS_p;
  }
   printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f8);
   { 
    if(f8==0) goto DBMS_p;
  }
   Profcomm:
  printf("\nEnter marks in prof. communication ");
    scanf("%d",&q1);
    if(q1>80){
   printf("\nplz enter less than/equal to 80 ");
    goto Profcomm;
  }
   printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f9);
   { 
    if(f9==0) goto Profcomm;
  }
  PROFcommP:
  printf("\nEnter marks in PROFcomm practical ");
    scanf("%d",&q2);
    if(q2>20){
   printf("\nplz enter less than/equal to 20 ");
    goto PROFcommP;
  }
   printf("To confirm press any other key \nTo re enter press 0\n ");
    scanf("%s",&f10);
   { 
    if(f10==0) goto PROFcommP;
  }
  
}
void show(){
   int i=0,i1=0,j=0,j1=0,k=0,k1=0,l=0,l1=0;
   while(i1<113){
  printf("*");
  i1++;}
printf("\n|");
   printf("\n| \t\t\t SECOND SEMESTER OF BACHELOR OF ENGINEERING , SUMMER 2022 ");
   printf("\n|\n");
   while(i<113){
  printf("-");
  i++;
   }
   printf("\n| NAME : %s \t \t",ch);
   printf("\n| DATE : %d/%d/%d \t\t\t\t\t\t PLACE : %s",dd,mm,yy,b);
   printf("\n| CLG NAME : %s \t \t ",a);
   printf("\n| MEDIUM : ENGLISH \t \t \t \t \t\t ROLL NO. : %s \n",r);
   while(j<113){
  printf("-");
  j++;
   }
   printf("\n|\t SUBJECTS \t\t\t\t| marks\t\t| practical\t|\tTotal \t| Obtained\t|\n");
   while(k<113){
  printf("-");
  k++;
   }
   printf("\n| SCRIPTINg & SYS. program. II \t\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d %c\t|",m,m1,m+m1,q);
   printf("\n| Web development course\t\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d %c\t|",n,n1,n+n1,x);
   printf("\n| Computational thinking-program.\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d %c\t|",o,o1,o+o1,y);
   printf("\n| Database management system\t\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d %c\t|",p,p1,p+p1,u);
   printf("\n| Professional communication\t\t\t| %d\t\t| %d\t\t|\t100 \t|\t%d %c\t|\n",q1,q2,q1+q2,v);
   while(l<113){
  printf("-");
  l++;
  }
   printf("\n|\tTotal marks obt\t\t| \t Out of Marks\t | PERCENTAGE\t| \t Result | GRADE |\n");
   while(l1<113){
  printf("-");
  l1++;
  }
   printf("\n|\t\t%0.2f\t\t|\t 500.00  \t\t |\t %0.2f\t| \t%s\t|  %c \t|\n",total,per,res,grade);
   while(k1<113){
  printf("*");
  k1++;}
   printf("\n|");
   printf("\n|\t\t\t\t%s You are %sed !",rem,res);
   printf("\n| \n");
   while(j1<113){
  printf("*");
  j1++;}
   printf("\n\n\n");
   printf("\n\t\t\t\t\t\tCTP MINI PROJECT\n");
}
int calculations(){
   
   char res[5];
   t1=m+m1;
   t2=n+n1;
   t3=o+o1;
   t4=p+p1;
   t5=q1+q2;
   total = t1+t2+t3+t4+t5;
   per = total/5;
   
   
   if(per>=90)
    grade = 'A';
else if(per>= 80)
grade = 'B';
else if(per>= 70)
grade = 'C';
   else if(per>= 60)
grade = 'D';
   else if(per>= 40)
grade = 'E';
   else
grade = 'F';
}
void UNIX(){
   if(t1<40){
  q ='#';
  count++;
fflush(stdin);
   }
   else
    q = ' ';
   fflush(stdin);
}
void DBMS(){
   if(t2<40){
  x ='#';
  count++;
  fflush(stdin);
   }
   else
    x = ' ';
   fflush(stdin);
}
void CTP(){
   if(t3<40){
  y ='#';
  count++;
  fflush(stdin);
   }
   else
    y = ' ';
   fflush(stdin);
}
void WEBD(){
   if(t4<40){
  u ='#';
  count++;
  fflush(stdin);
   }
   else
    u = ' ';
   fflush(stdin);
}
void Prof_COMMUNICATION(){
   if(t5<40){
  v ='#';
  count++;
  fflush(stdin);
   }
   else
v = ' ';
   fflush(stdin);
}
void result(){
   if(per>40 && count==0){
  strcpy(res,s);
   }
   else
    strcpy(res,s1);
}
void remark(){
   if(per>40 && count==0){
  strcpy(rem,s3);
   }
   else
    strcpy(rem,s4);
}