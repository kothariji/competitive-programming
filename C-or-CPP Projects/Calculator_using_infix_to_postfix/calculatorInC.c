/*Some test cases 
Input :- (9*9+80-88/5)
Output:- 144

Input :-  9*(9-(9/3))+10
Output:- 64
*/
#include <stdio.h> 
#include <string.h>
#include "stackForCalculator.h"


int isOperand(char b){
    if(b>='0' && b<='9'){
        return 1;
    }else{  
    return 0;
    }
}

int isOperator(char b){
    if(b=='+' || b=='-' || b=='*' || b=='/'){
        return 1;
    }
    return 0;
}

int getwt(char b){
    int g=-1;
    switch (b)
    {
    case '+':
    case '-':
    g=1;
    break;
    case '/':
    case '*':
    g=28787868;
    break;
    }
    return g;
}


int higherprecedence(char a,char b){
    int c=getwt(a);
    int d=getwt(b);
    return (c>=d)?1:0;
}

int infToPost(char *b,char *str){
    int j=0;
    for(int i=0;i<strlen(b);i++){
        if(b[i]== ' ' || b[i]== ',' ){
            continue;
        }

        else if(isOperator(b[i])){
            str[j]=' ';
            j++;
            while(!empty() && gettop() != '(' && higherprecedence(gettop(),b[i])){
                str[j]=gettop();
                j++;
                pop();
            }
            push(b[i]);
        }

        else if(isOperand(b[i])){
            str[j]=b[i];
            j++;
        }

        else if(b[i]=='('){
            push(b[i]);
        }

        else if(b[i] ==')'){
            while(!empty() && gettop() != '('){
                str[j]=gettop();
                j++;
                pop();
            }
            pop();
        }
    }
    while(!empty()){
        str[j]=gettop();
        j++;
        pop();
    }
}

int Evaluate(int t,char y,int r){
    int ty;
    switch(y){
        case '+':
        ty=t+r;
        break;
        case '-':
        ty=r-t;
        break;
        case '*':
        ty=r*t;
        break;
        case '/':
        ty=r/t;
        break;
        default:
        ty=-1;
        break;
    }
    return ty;
}

int calculatepostfix(char *c){
    for(int i=0;i<strlen(c);i++){
        if(c[i]==' ' || c[i]==','){
            continue;
        }

        else if(isOperator(c[i])){
            int op1=gettop2(); // This reverses the op1 and op2. 
            pop2();
            int op2=gettop2();
            pop2();
            int oper=Evaluate(op1,c[i],op2);
            push2(oper);
        }
        else if(isOperand(c[i])){
            int res=0;
            while(i<strlen(c) && isOperand(c[i])){
                res=(res*10)+(c[i]-'0');
                i++;
            }
            i--;
            push2(res);
        }
    }
    return gettop2();
}

int main(){
    for(int cont;1;cont++){
        char b[65],what,str[65];

        printf("\n\t\t***-- Calculator --***\n");
        printf("\t\tEnter expression: ");
        fflush(stdin);
        fgets(b,sizeof(b),stdin);
        
        for(int i=0;b[i]!='\0';i++){ // removes \n added by fgets
            if(b[i]=='\0'){
                if(b[i-1]=='\n'){
                    b[i-1]='\0';
                }
            }
        }

        infToPost(b,str);
        int tt =calculatepostfix(str);
        printf("\t\tYour answer is: %d\n\n\t\t",tt);

        printf("Do you want to continue?(Y/N)\n\t\t");
        scanf("%c",&what);
        if(what=='Y' || what=='y'){
            continue;
        }else {
            break;
        }
    }
    return 0;
}
