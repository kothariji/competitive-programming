//Author: Rakshit Naidu

#include <stdio.h>
int func(int x,int y,int r);

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int rem=2;
	    func(a,b,rem);
	}
	return 0;
}
int func(int x,int y,int r)
{
    x = x - (r/2);
	r++;
	r++;
	if(x<0)
	{
	    printf("Bob\n");
	    return;
	}
    y = y - (r/2);
	r++;
	r++;
	if(y<0)
	{
	    printf("Limak\n");
	    return;
	}
	return func(x,y,r);
}
