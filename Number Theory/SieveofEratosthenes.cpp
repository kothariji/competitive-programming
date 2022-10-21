//Given a number n, need to print all prime numbers less than or equal to n
// Seive algorithm works as we make an array of n+1 terms from 0 to n and mark them True
// then first we ignore 0 and 1 then mak multiples of 2 and 3 false and then of 5 
// then what we are left with is a array with prime numbers as true

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)       
{
    if(n==1)
    {
        return false;
    }
    if(n==2 || n==3)
    {
        return true;
    }
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}


void printPrimes(int n)     //Time Complexity O(n*root(n))
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<endl;
        }
    }

}

void seive0(int n)      //Simple Implementation of Seive
{
    vector <bool> Prime(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(Prime[i])
        {
            for(int j=2*i;j<=n;j=j+i)
            {
                Prime[j]=false;
            }
        }

    }
    for(int i=2;i<=n;i++)
    {
        if(Prime[i])
        {
            cout<<i<<endl;

        }
    }
}

void seive1(int n)      //Optimised Implementation of seive
{
    vector <bool> Prime(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(Prime[i])
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                if(Prime[i])
                {
                    Prime[j]=false;
                }
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(Prime[i])
        {
            cout<<i<<endl;
        }
    }

}
void seive2(int n)      // O(nloglog(n))
{
    vector<bool> Prime(n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(Prime[i])
        {
            cout<<i<<endl;
            for(int j=i*i;j<=n;j=j+i)
            {
                Prime[i]=false;

            }
        }
    }
}
int main()
{
    // printPrimes(10);
    seive1(10);
    return 0;
}