#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string a,string b)//comparator defination
{
    if(a.length()==b.length())
        return a<b;

    return a.length()>b.length();
}
int main()
{
    int n;
    cin>>n;//taking no. of strings
    cin.get();

    string s[100];
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    cout<<endl;
    //sorting
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    cout<<endl;
    //comparator
    sort(s,s+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}
