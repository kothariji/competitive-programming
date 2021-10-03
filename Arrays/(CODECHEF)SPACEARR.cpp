#include<bits/stdc++.h>

#define speed ios_base::sync_with_stdio(0), cin.tie(0) , cout.tie(NULL)

#define ll long long int

using namespace std;

void valkarye()

{

    ll n;

    cin>>n;

    ll ar[n];

    ll checker=0,chk=0;  

    for(ll i=1;i<=n;i++)

      {

          cin>>ar[i];

      }

    sort(ar+1,ar+1+n);  

    for(ll i=1;i<=n;i++)

    {

        if(ar[i]>i)

        {

            chk=1;

            break;

        }

    }

    if(chk==1)

      cout<<"Second";

    else{  

        // sort(ar+1,ar+n+1);

        for(ll i=1;i<=n;i++)

        {

            checker+=i-ar[i];

        }

    if(checker%2!=0)

      cout<<"First";

    else

      cout<<"Second";

    }

    

}

int main()

{

    speed;

    ll t;

    cin>>t;

    while(t--)

    {

        valkarye();

        cout<<"\n";

    }

    return 0;

}
