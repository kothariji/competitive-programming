/*
    Just For You 97116:)
*/

#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b)
#define abS(x)			((x)<0?-(x):(x))

#ifdef ONLINE_JUDGE
#define MAX 200005
#else
#define MAX 1000
#endif

int a[MAX],b[MAX];
char s[100],r[100],t[100];

const double EPS = 1e-9;
double ang[MAX],angle;
int hh[MAX],mm[MAX];

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif

	int t,n,m,k,l,x,y,z,flag,count,sum,d,mx,mn,prod;
	double hour_angle = 0.0;
	double minute_angle = 0.0;

	for(int i=0;i<60*12;i++){
		if(i%60==0)
			minute_angle=0;
		else
			minute_angle+=6.0;
		hh[i] = i/60;
		mm[i] = i%60;
		ang[i] = abS(minute_angle-hour_angle);
		if(ang[i]-EPS>180.0)
			ang[i] = 360.0 - ang[i];
		hour_angle += 0.5;
	}

	double error = 1.0/120.0;
	scanf("%d",&t);
	while(t--){
		scanf("%lf",&angle);
		for(int i=0;i<12*60;i++){
			if(abS(ang[i]-angle)<error+EPS)
				printf("%.2d:%.2d\n",hh[i],mm[i]);
		}
	}
	return 0;
}
