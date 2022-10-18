import java.util.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
	
		while(t>0)
		{
		    int x=sc.nextInt();
		    int i;
		    int c=0;
		    int n=0;
		    int ans;
		    char[] str=new char[14];
		    
		    str=sc.next().toCharArray();
		    for(i=0;i<str.length;i++)
		    {
		        if(str[i]=='C')
		            c=c+2;
		        else if(str[i]=='N')
		            n=n+2;
		        else
		        {
		            c++;
		            n++;
		        }
		    }
		    
		    if(c>n)
		        ans=(60*x);
		    else if(n>c)
		        ans=(40*x);
		    else
		        ans=55*x;
		        
		    System.out.println(ans);
		    t--;
		}
	}
}
