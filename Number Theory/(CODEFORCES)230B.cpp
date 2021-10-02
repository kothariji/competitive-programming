//solution for 230B problem in codeforces - https://codeforces.com/problemset/problem/230/B
#include<bits/stdc++.h>
using namespace std ;
bool find(long long int b)
{
    long long int n= sqrt(b);
    if(n <= 3)
        return n > 1;
    if(n % 2 == 0 or n % 3 == 0)
        return false;
    int i = 5;
    while (pow(i,2) <= n){
        if(n % i == 0 or n % (i + 2) == 0)
            return false;
        i += 6;
    }
    return true;
}
bool fsq(long long int a)
{
    long long int s= sqrt(a);
    if(s*s==a)
    return true;
    else 
    return false;
}
 
int main()
{
    long long int n,a;
    cin>>n;
    while(n--)
    {
        int c=2;
        cin>>a;
        if(find(a) && fsq(a)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}