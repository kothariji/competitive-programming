#include<iostream>
using namespace std;
int main()
{ int t,i;
  
  cin>>t;
  for(i=0;i<t;i++)
  { int count=0,c=0,m=0,p=0,s,n,k,l;
    cin>>n;
    int a[n];
    for(s=0;s<n;s++)
           {
               cin>>a[s];
           }
           k=0;
           l=n-1;
           while(k<=l){
           if(m<=p)
           {
               m=m+a[k];
               k++;
               c++;
           } 
           else if(m>p)
           {
               p=p+2*a[l];
               l--;
               count++;
           }}
           cout<<c<<" "<<count<<"\n";
  if(c>count)
  { 
      cout<<"Motu\n";
  }
  else if(c<count)
  {
      cout<<"Patlu\n";
  }
  else
  cout<<"Tie\n";
 }
  return 0;
}
