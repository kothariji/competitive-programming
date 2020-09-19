#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;
 
int main()
{
 	string a,b,c,d;
 	cin>>a>>b>>c>>d;
 	int lena = a.length()-2;
 	int lenb = b.length()-2;
 	int lenc = c.length()-2;
 	int lend = d.length()-2;

 	int flag = 0;
 	char ans;
 	if(lena >= lenb*2)
 		if(lena >= lenc*2)
 			if(lena >= lend*2)
 				{
 					flag++;
 					ans = 'A';
 				}
 	if(lenb >= lena*2)
 		if(lenb >= lenc*2)
 			if(lenb >= lend*2)
 				{
 					flag++;
 					ans = 'B';
 				}
 	if(lenc >= lenb*2)
 		if(lenc >= lena*2)
 			if(lenc >= lend*2)
 				{
 					flag++;
 					ans = 'C';
 				}
 	if(lend >= lenb*2)
 		if(lend >= lenc*2)
 			if(lend >= lena*2)
 				{
 					flag++;
 					ans = 'D';
 				}			



 	if(2*lena <= lenb)
 		if(2*lena <= lenc)
 			if(2*lena <= lend)
 				{
 					flag++;
 					ans = 'A';
 				}
 	if(2*lenb <= lena)
 		if(2*lenb <= lenc)
 			if(2*lenb <= lend)
 				{
 					flag++;
 					ans = 'B';
 				}
 	if(2*lenc <= lena)
 		if(2*lenc <= lenb)
 			if(2*lenc <= lend)
 				{
 					flag++;
 					ans = 'C';
 				}
 	if(2*lend <= lena)
 		if(2*lend <= lenb)
 			if(2*lend <= lenc)
 				{
 					flag++;
 					ans = 'D';
 				}
 	if(flag == 1)
 		cout<<ans;
 	else
 		cout<<"C";
 	
}