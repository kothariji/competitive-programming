#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ 
 int key1,key2;
 char s,wish;
 int choice;
 printf("\nExpt No.3 \tSYMMETRIC ENCRYPTION AND DECRYPTION\t18/02/2013");
 do {
 cout<<"\n1:Sender side\n2:Receiver side\n3:exit(0)";
 cout<<"\nEnter your choice:";
 cin>>choice;
 
 printf("\nAt Sender side:");
 printf("\nEnter the key:");
 scanf("%d",&key1);

 printf("\nAt Receiver side:");
 printf("\nEnter the key:");
 scanf("%d",&key2);
 printf("\nEnter the message:");
  s=getchar();
 
 if(key1==key2)
 {
  printf("\nKeys Match..you can proceed communication");

 }
 else
 {
  printf("\nKeys do not match...connection lost.....");
  exit(0);
 }
 switch(choice)
 {
 case 1:
 

  //  printf("\nEncrypted text is: ");
    while(s!='\n')
    {
     if(s==' ')
      putchar(s);
     else
     {
      putchar(s+key1);
     }
     s=getchar();
    }
    putchar(s);
    break;
    case 2:
     
     while(s!='\n')
     {
      if(s==' ')
       putchar(s);
      else{
       putchar(s-key2);
      }
      s=getchar();
     }
     putchar(s);
     break;
    default:
     exit(0);
 }
    printf("\nDo you want to continue communnication:?(y or Y)");
    scanf("%c",&wish);
    } while(wish=='y'||wish=='Y');
  return 0;
}
