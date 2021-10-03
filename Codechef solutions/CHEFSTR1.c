#include <stdio.h>
long diff(long int a,long int b)
    {
        return(a>b?(a-b):(b-a))-1;
    }
int main(void) {
	int t,i;
	long int n,prev,x;
	unsigned long long int s;
	scanf("%d",&t);
	while(t--){ 
	     s=0;
	     scanf("%ld",&n);
	     scanf("%ld",&prev);
	     for(i=0;i<n-1;i++)
	        {
	            scanf("%ld",&x);
	            s+=diff(x,prev);
	            prev=x;
	        }
	        printf("%llu\n",s);
	}
	return 0;
}

