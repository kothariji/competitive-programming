import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Solution
{
    public static void main(String [] args) throws IOException
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[][]=new int[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }

        int a=0,b=0;
        int diff=0;
        int temp=n-1;
        for(int i=0;i<n;i++)
        {
            a=a+arr[i][i];
            b=b+arr[i][temp];
            temp--;
        }

        diff=Math.abs(a-b);
        System.out.println(diff);


    }
}
