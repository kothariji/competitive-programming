#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int j=0,a=0;
    string c="hello";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c[j])
        {
            a++;
            j++;
        }
        if(a==5)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

    return 0;
}
