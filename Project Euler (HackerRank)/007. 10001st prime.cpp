#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

bool isprime[MAX];
vector <int> v1;
void sieve()
{
    isprime[0] = isprime[1] = true;
    for(int i=2; i*i<1000001; i++)
        if(isprime[i] == false)
            for(int j = i*i; j<1000001; j+= i)
                isprime[j] = true;

    for(int i=2; i<1000001; i++)
        if(!isprime[i])
            v1.push_back(i);            
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v1[n-1]<<endl;
    }
    return 0;
}
