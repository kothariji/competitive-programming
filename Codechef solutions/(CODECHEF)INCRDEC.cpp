#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      ll ar[n],i;
      for(i=0;i<n;i++)
        cin>>ar[i];
      sort(ar,ar+n);    
      ll k=1,chk=1;
      if(ar[n-1]==ar[n-2])
        cout<<"NO\n";
      else
        {
            for(i=0;i<n-1;i++)
              {
                  if(ar[i]==ar[i+1])
                    {
                        k++;
                        chk=max(k,chk); 
                    }
                  else
                    k=1;
              }
             if(chk>2)
              cout<<"NO\n";
             else if(chk==1)
               {
                   cout<<"YES\n";
                   for(i=0;i<n;i++)
                     cout<<ar[i]<<" ";
                cout<<"\n";     
               }
             else
             {
                 vector<ll>vect;
                cout<<"YES\n";
                i=0;
                while(i<n)
                {
                    if(ar[i]==ar[i+1])
                      {
                          vect.push_back(ar[i]);
                          ar[i]=0;
                          i+=2;
                      }
                    else
                      {
                          vect.push_back(ar[i]);
                          ar[i]=0;
                          i++;
                      }
                }
                i=n-1;
                while(i>=0)
                {
                    if(ar[i]!=0)
                      {
                          vect.push_back(ar[i]);
                      }
                      i--;
                }
                for(i=0;i<vect.size();i++)
                  cout<<vect[i]<<" ";
                  cout<<"\n";
             }
             
        }
    }
    return 0;
}
