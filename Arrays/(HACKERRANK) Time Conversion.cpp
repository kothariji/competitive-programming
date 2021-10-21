#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch[10], i;
    cin>>ch;
    if(ch[8]=='A')
    {
        if(ch[0]=='1' && ch[1]=='2')
        {
            ch[0]='0';
            ch[1]='0';
        }
        
    }
    else
    {
        if(ch[0]=='0' && ch[1]<='7')
        {
            ch[0]='1';
            ch[1]= ch[1] + 2;
        }
        else if(ch[0]=='0' && ch[1]=='8')
        {
            ch[0]='2';
            ch[1]='0';
        }
        else if(ch[0]=='0' && ch[1]=='9')
        {
            ch[0]='2';
            ch[1]='1';
        }
        else if(ch[0]=='1' && ch[1]=='0')
        {
            ch[0]='2';
            ch[1] = '2';
        }
        else if(ch[0]=='1' && ch[1]=='1')
        {
            ch[0]='2';
            ch[1] = '3';
        }
        
    }
    for(i=0; i<8; i++)
        cout<<ch[i];
    return 0;
}
