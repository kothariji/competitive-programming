/*
    Author:- Akash
*/

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n,m,p,i,j,size,c=-1;
	cin>>n>>m>>p;
	size=m+n+p;
	int a[n+m+p];
	for(i=0;i<size;i++)
	    cin>>a[i];
	    
	 sort(a,a+size);
	 a[size]=-1;
	 vector<int>b;
	 for(i=0;i<size;i++)
	 {
	     if(a[i]!=a[i+1])
	     {
	         if(i-c>=2)
	         b.push_back(a[i]);
	         
	         c=i;
	     }
	 }
	 cout<<b.size()<<"\n";
	 for(i=0;i<b.size();i++)
	 cout<<b[i]<<"\n";
	 
	return 0;
}
