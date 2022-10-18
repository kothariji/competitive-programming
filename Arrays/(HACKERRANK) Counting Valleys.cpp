#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, level=0, c=0;
    cin>>n;
    char ch[n];
    cin>>ch;
    for(i=0; i<n; i++)
    {
        if(ch[i]=='D')
            level = level - 1;
        else 
        {
            level = level + 1;
            if(level==0)
                c++;
        }
    }
    cout<<c;
    return 0;
}
