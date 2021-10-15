#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,c;
    cin>>s;
    vector<int> vw,vb;
    c=s;
    int a=0;
    //white  bwb
 
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='B'&&s[i+1]=='B')
        {
            s[i]='W';
            s[i+1]='W';
 
            vw.push_back(i+1);
 
 
        }
        else
            if(s[i]=='B'&&s[i+1]=='W')
        {
            s[i]='W';
            s[i+1]='B';
 
            vw.push_back(i+1);
 
 
        }
    }
 
    if(s[n-1]=='W')
    {
        cout<<vw.size()<<"\n";
 
        for(int i=0; i<vw.size(); i++)
        {
            cout<<vw[i]<<" ";
        }
        a++;
    }
 
    else //black
    {
        for(int i=0; i<n-1; i++)
    {
        if(c[i]=='W'&&c[i+1]=='B')
        {
            c[i]='B';
            c[i+1]='W';
 
            vb.push_back(i+1);
 
 
        }
        else
            if(c[i]=='W'&&c[i+1]=='W')
        {
            c[i]='B';
            c[i+1]='B';
 
            vb.push_back(i+1);
 
 
        }
    }
       if(c[n-1]=='B')
       {
 
        cout<<vb.size()<<"\n";
 
        for(int i=0; i<vb.size(); i++)
        {
            cout<<vb[i]<<" ";
        }
        a++;
       }
 
    }
 
    if(a==0)
    {
        cout<<"-1"<<" ";
    }
}