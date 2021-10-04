/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    
		Scanner in=new Scanner(System.in);
		int t=in.nextInt();
		for(int i=0;i<t;i++)
		{
		    int x =in.nextInt();
		    if(x==1)
		    System.out.println("3");
		    else if(x==2)
		    System.out.println("33");
		    else
		    {
		        String s1="";
		        for(int j=0;j<x-2;j++)
		            s1=s1+"0";
		        System.out.println("3"+s1+"3");
		   
		    }
		}
    }
}
