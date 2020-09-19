#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
    int n;
    cin>>n;
    string data;
    string t1,t2 = "kotahriji";
    vector <string> v1;
    for(int i=0; i<n; i++)
    {
        cin>>data;
        if(i == 0)
            t1 = data;
        if(t1 != data)
            t2 = data;
        v1.push_back(data);
    }
    int ct1 = count(v1.begin(), v1.end(), t1);
    int ct2 = count(v1.begin(), v1.end(), t2);
    if(ct1 < ct2)
        cout<<t2;
    else
        cout<<t1;


    
    return 0;
}