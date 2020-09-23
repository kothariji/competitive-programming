#include <bits/stdc++.h>
#define lli long long int
#define MAX 1000005
using namespace std;

bool isprime[MAX];

void sieve()
{
    isprime[0] = isprime[1] = true;
    for(int i=2; i*i <= MAX; i++)
    {
        if(isprime[i] == false)
        {
            for(int j = i*i; j<=MAX; j+=i)
                isprime[j] = true;
        }
    }
}

int main() {

    sieve();
    int n;
    cin>>n;
    lli sum =7;
    for(int i=2; i<n; i++)
    {
        string s = to_string(i);
        string o = s;
        if(count(s.begin(), s.end(), '0'))
            continue;
        if(count(s.begin(), s.end(), '2'))
            continue;
        if(count(s.begin(), s.end(), '4'))
            continue;
        if(count(s.begin(), s.end(), '6'))
            continue;
        if(count(s.begin(), s.end(), '8'))
            continue;
        if(count(s.begin(), s.end(), '5'))
            continue;

        int flag = 0;
        do
        {
            
            int num = stoi(s);
            if(isprime[num] == true)
            {
                //cout<<"happen for "<<num<<endl;
                flag = 1;
                break;
            }
            rotate(s.begin(), s.begin()+1, s.end());
            if(s == o)
                break;
        }while(1);
        if(flag == 0)
            sum += i;
    }
    cout<<sum<<endl;

    return 0;
}
