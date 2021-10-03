/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main(String []args) throws java.lang.Exception

    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- !=0)
        {
            int n=sc.nextInt();
            String s=sc.next();
            char ch[]=new char[16];
            ch[0]='a';
            ch[1]='b';
            ch[2]='c';
            ch[3]='d';
            ch[4]='e';
            ch[5]='f';
            ch[6]='g';
            ch[7]='h';
            ch[8]='i';
            ch[9]='j';
            ch[10]='k';
            ch[11]='l';
            ch[12]='m';
            ch[13]='n';
            ch[14]='o';
            ch[15]='p';
            String s1=" ";
            int j=0;
            int l=15;
            for(int i=0;i<n;i++)
            {
                if(i%4==0)
                {
                    j=0;
                    l=15;
                }
                if(s.charAt(i)=='0'){
                    l=(l+j)/2;
                }
                else{
                    j=((l+j)/2)+1;
                }
                if(i%4==3)
                {
                    s1+=ch[j];
                }
            }
            System.out.println(s1);
        }
    }
}
