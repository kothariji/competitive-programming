import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws IOException
	{
	try{   
	Scanner sc=new Scanner(System.in);
	int a=sc.nextInt();
	int b=sc.nextInt();
	int c=a-b;
	if((c%10)==9)
	System.out.println(c-1);
	else
	System.out.println(c+1);
	}
	catch(Exception e)
	{
	    return;
	}
}
}
