using namespace std;
#include<bits/stdc++.h>

int countNumber(string str,string s)
{
    int num=0;
    for(size_t found=s.find(str);found!=string::npos;found=s.find(str,found+str.length()))
    {
        num++;
    }
    return num;
}
int main()
{
    int T,l,suvojit,suvo;
    cin>>T;
    string s,str;
    while(T--)
    {
        suvo=suvojit=0;
        cin>>s;
        suvo=countNumber("SUVO",s);
        suvojit=countNumber("SUVOJIT",s);
        cout<<"\nSUVO = "<<suvo-suvojit<<", SUVOJIT = "<<suvojit;
    }
    return 0;
}
