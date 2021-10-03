/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-- !=0)
		{
		    int n=sc.nextInt();
		    int m=sc.nextInt();
		    int a[]=new int[n];
		    int b[]=new int[m];
		    long sum1=0;
		    long sum2=0;
		    for(int i=0;i<n;i++)
		    {
		        a[i]=sc.nextInt();
		        sum1+=a[i];
		    }
		    for(int i=0;i<m;i++)
		    {
		        b[i]=sc.nextInt();
		        sum2+=b[i];
		    }
		    Arrays.sort(a);
		    Arrays.sort(b);
		    int x=0;
		    int i=0;
		    int j=m-1;
		    while((i!=n)&&(j!=-1)&&(sum1<=sum2))
		    {
		        if(a[i]>=b[j])
		        {
		            break;
		        }
		        sum1=sum1-a[i]+b[j];
		        sum2=sum2-b[j]+a[i];
		        i++;
		        j--;
		        x++;
		        
		    }
		    if(sum1>sum2)
		    {
		        System.out.println(x);
		    }
		    else{
		        System.out.println(-1);
		    }
		}
	}
}
