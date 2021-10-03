#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b))

#ifdef ONLINE_JUDGE
#define MAX 200005
#else
#define MAX 100000
#endif

int a[MAX],b[MAX];
char s[MAX],r[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n,m,k,l,x,y,z,flag,count,d,mx,mn;
	long long int sum,prod;

	scanf("%d",&test);

	while(test--){
		flag=0;
		// scanf("%d",&n);
		scanf("%d%d",&n,&m);

		if(n%2 && m%2){
			if(abs(n-m)==2)
				flag=1;
		}else if(n%2){
			if(m-n==1)
				flag=1;
		}else if(m%2){
			if(n-m==1)
				flag=1;
		}else{
			if(abs(n-m)==2)
				flag=1;
		}
		if(flag)	printf("YES\n");
		else		printf("NO\n");
	
	}
	return 0;
}
