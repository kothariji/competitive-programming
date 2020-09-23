#include <bits/stdc++.h>
#define lli long long int
using namespace std;

bool ispali(string s)
{
    int i=0; 
    int j = s.length()-1;
    while(i <= j)
    {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

string to_bin(int n, int k)
{
    string s = "";
    while(n)
    {
        s = (char)((n%k)+48) + s;
        n /= k;
    }
    return s;
}

int main() {
    int n,k;
    lli sumi = 0;
    cin>>n>>k;
    for(int i=1; i<n; i++)
    {
        if(ispali(to_string(i)) && ispali(to_bin(i,k)))
            sumi += i; 
    }
    cout<<sumi;
    return 0;
}
