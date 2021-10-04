//https://www.codechef.com/LTIME81B/problems/NOTALLFL


/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    int n=sc.nextInt();
		    int k=sc.nextInt();
		    int a[]=new int[n];
		    int i;
		    for(i=0;i<n;i++)
		    {
		        a[i]=sc.nextInt();
		    }
		    int freq[]=new int[100001];
		    k=k-1;
		    int start=0, end=0;
		    int currentCount=0;
		    int previousElement=0;
		    for(i=0;i<n;i++)
		    {
		        freq[a[i]]+=1;
		        if(freq[a[i]]==1)
		        {
		            currentCount+=1;
		        }
		        while(currentCount>k)
		        {
		            freq[a[previousElement]]-=1;
		            if(freq[a[previousElement]]==0)
		                currentCount-=1;
		            previousElement+=1;
		        }
		        if(i- previousElement+1>= end- start+1)
		        {
		            end=i;
		            start= previousElement;
		        }
		    }
		    System.out.println(end+1-start);
		}
	}
}
