/* package codechef; // don't place package name! */

import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int cr=4;
		int ar=2;
		int t=sc.nextInt();
		while(t>0)
		{
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		    int z=sc.nextInt();
		    System.out.println((x*cr)+(y*ar));
		    t--;
		}
	}
}
