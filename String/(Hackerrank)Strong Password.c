/* this is a program through which your password can be created a strong one
Strong Password Criteria:
- Its length is at least 6.
- It contains at least one digit.
- It contains at least one lowercase English character.
- It contains at least one uppercase English character.
- It contains at least one special character.
The special characters are: !@#$%^&*()-+*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Return the minimum number of characters to make the password strong
int minimumNumber(int n, char* password) {
int d=0,A=0,a=0,s=0,min=0;
int i;
for(i=0;i<n;i++)
{
    // checking that password[i] is a lower case alphabet
    if(password[i]>='a'&&password[i]<='z')
    //increment a by 1 so it could be assign that a to z alphabet is in the password
    a++;
    //checking that password[i] is a upper case alphabet
    else if(password[i]>='A'&&password[i]<='Z')
    //increment A by 1 so it could be assign that A to Z alphabet is in the password
    A++;
    //checking that password[i] is a digit
    else if(password[i]>='0'&&password[i]<='9')
    //increment d by 1 so it could be assign that 0 to 9 digit is in the password
    d++;
    //checking that password[i] is a special symbol
    else if(password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'||password[i]=='%'||password[i]=='^'||password[i]=='&'||password[i]=='*'||password[i]=='('||password[i]==')'||password[i]=='-'||password[i]=='+')
    //increment s by 1 so it could be assign that  special symbol is in the password
   s++;

}
// if a is equal to 0 that means password is not strong a can be created by adding a lower case alphabet
if(a==0)
min++;
// if A is equal to 0 that means password is not strong a can be created by adding a Upper case alphabet
if(A==0)
min++;
// if d is equal to 0 that means password is not strong a can be created by adding 0 to 9 digit
if(d==0)
min++;
// if d is equal to 0 that means password is not strong a can be created by adding a special symbol
if(s==0)
min++;
// if min+password length is less than 6 then password can be created strong by adding min+=6-(min+n)
if(min+n<6)
min+=6-(min+n);
return min;
}
//driver code
int main()
{
    char str[100];
    int res;
    printf("Enter Password: ");
    // taking password
    fgets(str,100,stdin);
    // resizing password to the password length
    realloc(str,strlen(str)+1);
    // calling function to get min changes required to create password strong
    res=minimumNumber(strlen(str)-1,str);
    //printing the minimum change required
    if(res!=0)
    printf("Minimum change required: %d",res);
    else
        printf("Password is strong no change required");
return 0;
}
/*
Case 1:
Input:Enter Password: UG@com1
Output:Password is strong no change required
Case 2:
Input:Enter Password: goT1
Output:Minimum change required: 2

Time Complexity: 0(n)

*/
