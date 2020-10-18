/* You are baby-sitting n children and have m > n cookies to divide between them. 
You must give each child exactly one cookie (of course, you cannot give the same cookie to two different children). 
Each child has a greed factor gi, 1 ≤ i ≤ n which is the minimum size of a cookie that the child will be content with; 
and each cookie has a size sj , 1 ≤ j ≤ m. Your goal is to maximize the number of content children, i.e.., children i assigned a cookie j with gi ≤ sj. 
Give a correct greedy algorithm for this problem, prove that it finds the optimal solution, and give an efficient implementation. */


import java.io.*;
import java.util.*;
import java.util.Arrays;

public class Main
{ public static void main (String[] args) {
  Scanner sc=new Scanner(System.in);
  int n,m,i,j;
  n= sc.nextInt();
  m= sc.nextInt();
  
  int g[]= new int[n];
  int s[]= new int[m];
  int t=0;
  // children greed factor
  for(i=0;i<n;i++)  
  { g[i]=sc.nextInt();
  }
  // cookies size
  for(j=0;j<m;j++)
  { s[j]=sc.nextInt();
  }
   for(int k=0; k<=g.length-1;k++)
    {    for( i=0; i<=g.length-2;i++)
         {      if(g[i]<g[i+1])
               {     int temp=g[i];
                      g[i]=g[i+1];
                      g[i+1]=temp;
               }
         }       
    }
     for(int k=0; k<=s.length-1;k++)
    {    for( j=0; j<=s.length-2;j++)      
         {    if(s[j]<s[j+1])
              {      int temp=s[j];
                      s[j]=s[j+1];
                      s[j+1]=temp;
              }
          }
    }
  System.out.println("decsending order:");
   for(i=0;i<n;i++)
  {   System.out.print(g[i]);
  }   System.out.println();
   for(j=0;j<m;j++)
  {  System.out.print(s[j]);
  }  System.out.println();
  
  System.out.print("greed factor \t cookie size assigned");  
  System.out.println();
  int l=m-1;
  for(i=0;i<n;i++)
   {  for(j=i;j<m;j++)
    {   if(g[i]<=s[j])
      {   t++;       //when gi<=sj, store it in t.
      System.out.println(g[i]+"\t \t \t"+s[j]);
      }
      else if(g[i]>s[j])
      {
        System.out.println(g[i]+"\t \t \t"+s[l]);
        l--;
        t++;
          
      }
    System.out.println();  
  break;
    }
   } 
   
System.out.println("total no. of cookies assigned: "+t);
  }  }  
