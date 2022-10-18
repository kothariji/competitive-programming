#include<bits/stdc++.h>
using namespace std;
struct Stack{
	int *ar;
	int top;
	int cap;
	Stack(int c){
		cap=c;
		ar=new int[cap];
		top=-1;
	}

	void push(int x)
    {
	    if(top>=cap-1)
	    {
		    cout<<"Stack Overflow"<<endl;
	    }
	    else
	    {
		    top++;
		    ar[top]=x;
	    }
    }

    int pop()
    {
	    int ans=ar[top];
	    top--;
	    return ans;
    }

    int Top()
    {
        return ar[top];
    }

    int isEmpty()
    {
        if(top==-1) 
            return 1;
        else 
            return 0;
    }
};

int main(){
    string st;
    cout<<"Enter the string : ";
    getline(cin,st);
    int n=st.length();
    Stack s(n);
    int num=0;
    for(int i=0;i<n;i++)
    {
        if(st[i]==' ')
        {
            s.push(num);
            num=0;
        }
        else if(((st[i]-'0')>=0)&&((st[i]-'0')<=9)) 
            num=num*10+(st[i]-'0');
        else
        {
            int sd=s.pop();
            int fd=s.pop();
            if(st[i]=='+') s.push(fd+sd);
            if(st[i]=='-') s.push(fd-sd);
            if(st[i]=='*') s.push(fd*sd);
            if(st[i]=='/') s.push(fd/sd);
            if(st[i]=='%') s.push(fd%sd);
            i++;
        }
    }
    cout<<s.Top();
}
