#ifndef stacycalc
#define stacycalc
#define maxsize 50

char a[maxsize];
int top=-1;
int abc[maxsize];
int to=-1;

void push2(int re){ abc[++to]=re; }

void push(char b){ a[++top]=b; }

void pop2(){ to--; }

void pop(){ top--;}

int gettop2(){ return (to==-1)?-1:abc[to]; }

char gettop(){ return (top==-1)?0:a[top]; }

int empty(){ return (top==-1)?1:0; }

#endif