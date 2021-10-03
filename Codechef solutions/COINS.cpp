#include <bits/stdc++.h>
using namespace std;

map<int,int> m;

long long int change(long long int n){
    if(n<12)    return n;
    if(m[n])    return m[n];
    m[n]=change(n/2)+change(n/3)+change(n/4);
    return m[n];
}

int main(){
	long long int n,count=0;
	while(scanf("%lld",&n)>0){
	    m[n]=1;
		count=max(n,change(n/2)+change(n/3)+change(n/4));
		printf("%lld\n",count);
		count=0;
		m.clear();
	}
	return 0;
}
