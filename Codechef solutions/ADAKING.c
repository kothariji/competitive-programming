#include <stdio.h>
int main(void) {
	int t,n,k,r,i,j;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&k);
	    r=64-k;
	    for(i=1;i<=8;i++){
	        for(j=1;j<=8;j++){
	            if(i==8&&j==8)
	            {printf("O");}
	            else if(r)
	            {printf("X");r--;}
	            else
	            { printf(".");}
	    }
	        printf("\n");
	}
	}
	return 0;
}

