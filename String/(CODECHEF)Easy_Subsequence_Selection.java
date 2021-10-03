//https://www.codechef.com/DEC19B/problems/SUBSPLAY


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
		try {
		    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		    int t=Integer.parseInt(br.readLine());
		    while(t-->0)
		    {
		        int n=Integer.parseInt(br.readLine());
		        String str=br.readLine();
		        int min=Integer.MAX_VALUE;
		        int lastOccur[]=new int[26];
		        int i;
		        for(i=0;i<26;i++)
		        {
		            lastOccur[i]=Integer.MIN_VALUE;
		        }
		        for(i=0;i<n;i++)
		        {
		            if(lastOccur[str.charAt(i)-'a']==Integer.MIN_VALUE)
		                lastOccur[str.charAt(i)-'a']=i;
		            else
		            {
		                int val=i-lastOccur[str.charAt(i)-'a'];
		                lastOccur[str.charAt(i)-'a']=i;
		                if(min>val)
		                    min=val;
		            }
		        }
		        if(min == Integer.MAX_VALUE) //if no element is repeating
		            System.out.println(0);
		        else
		        {
		            min=min-1;
		            System.out.println(n-1-min);
		        }
		    }
		} catch(Exception e) {
		    return;
		}
	}
}
