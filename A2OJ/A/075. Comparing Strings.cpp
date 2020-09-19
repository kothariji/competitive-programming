#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i=0;
    if(s1.length() != s2.length())
    {
        cout<<"NO";
        return 0;
    }
    int err = 0,er1 = -1,er2;
    while(i < (s1.length()))
    {
        if(s1[i] != s2[i])
        {
            err++;
            if(er1 != -1)
                er2 = i;
            else
                er1 = i;
        }
        if(err > 2)
        {
            cout<<"NO";
            return 0;   
        }
        i++;
    }
    if(err == 0)
        cout<<"YES";    
    else if (err == 1)
        cout<<"NO";
    else
    {
        if((s1[er1] == s2[er2]) and (s1[er2] == s2[er1]))
            cout<<"YES";
        else
            cout<<"NO";   
    }
    
    return 0;

}