#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

string remo(string s)
{
    string news = "";
    for(auto c: s)
        if(c != '0')
            news += c;
    return news;
}

int main()
{
    lli n1, n2, n3, nn1, nn2, nn3;
    string str1, str2, str3;
    cin>>n1>>n2;
    n3 = n1+n2;
    str1 = to_string(n1);
    str2 = to_string(n2);
    str3 = to_string(n3);
    str1 = remo(str1);
    str2 = remo(str2);
    str3 = remo(str3);
    nn1 = stoi(str1);
    nn2 = stoi(str2);
    nn3 = stoi(str3);
    if((nn1 + nn2) == nn3)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}