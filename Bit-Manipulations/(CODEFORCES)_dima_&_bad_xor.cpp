#include<bits/stdc++.h>
using namespace std;


typedef string                 STR;
typedef long long              LL;
typedef unsigned long long     ULL;
typedef long double            LD;
typedef vector<int>            VI;
typedef priority_queue<int>    PQI;
typedef vector<LL>             VLL;
typedef vector<ULL>            VULL;
typedef vector<STR>            VSTR;
typedef vector<char>           VC;
typedef pair<int,int>          PII;
typedef pair<LL,LL>            PLL;
typedef pair<STR,int>          PSI;
typedef pair<int,STR>          PIS;
typedef map<int,int>           MII;
typedef map<LL,LL>             MLL;
typedef map<STR,int>           MSI;
typedef map<char,int>          MCI;
typedef map<int,STR>           MIS;
typedef set<STR>               SS;
typedef set<int>               SI;
typedef set<LL>                SLL;



#define FF                  first
#define PB                  push_back
#define PF                  push_front
#define MP                  make_pair
#define all(a)             (a).begin(),(a).end()
#define dec(n)             cout<<fixed<<setprecision(n);
#define f(i,a,b)           for (i = a; i < b; i++)
#define fr(i,a,b)          for (i = a; i > b; i--)
#define rep(i,n)           for (i = 0 ; i < n; i++)
#define repr(i,n)          for (i = n - 1; i >= 0; i--)
#define fsort(a)            sort(a.begin(),a.end())
#define rsort(a)           sort(a.rbegin(),a.rend())
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL))           

const LL MOD     = 1000000007;
const int INF    = 0x3f3f3f3f;
const LL LL_INF  = 0x3f3f3f3f3f3f3f3f;
const LD PI      = acosl(-1.0l);
const LL MAXN    = numeric_limits<LL>::max();
const LL MINN    = (1e9+1);

void solve()
{
	int n,m,i,j;
	cin>>n>>m;
	int A[n][m];
	int x=0;
	rep(i,n)
	{
        rep(j,m)
        {
            cin>>A[i][j];
        }
         x ^=A[i][0];
	} 

	 if(x!=0)
	 	{   cout<<"TAK\n";
	 		rep(i,n) cout<<"1 ";
	 	}	
	 else{
	 	int flag=0;
	 	rep(i,n)
	 	{
	 		f(j,1,m)
			 {
			 	if(A[i][j]!=A[i][0])
			 		{flag=1;break;}
			 }
			 if(flag==1)
			 	break;
	 	}
	 	if(flag==1)
	 	{   
	 		cout<<"TAK\n";
	 		int k=0;
	 		rep(k,n)
	 		{
	 			if(k==i)
	 				cout<<j+1<<" ";
	 			else
	 				cout<<1<<" ";		
	 		}
	 	}
	 	else
	 		cout<<"NIE\n";
	 }

}
int main()
{  
   fast;
   int t=1;
   while(t)
     {
          t--;
          solve();
     }  
   return 0;
}