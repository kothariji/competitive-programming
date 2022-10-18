#include<stdio.h>
int main()
{
	int t,time;
	int ans=0,points=0;
	int a,b,c;
	int x,y,z;
	int i,j,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c);
		scanf("%d%d%d",&x,&y,&z);
		ans=0;
		for(i=0;i<=20;i++)
		{
			for(j=0;j<=20;j++)
			{
				for(k=0;k<=20;k++)
				{
					time=(i*a)+(j*b)+(k*c);
					points=(i*x)+(j*y)+(k*z);
					if(time<=240)
					{
						ans=(ans<points)?points:ans;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
return 0;
}