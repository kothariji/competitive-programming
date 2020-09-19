#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main() {

	int n,p1,p2,flag =0;
    cin>>n;
    for (int i = 0; i<n; i++) 
    {
        cin>>p1>>p2;
        if (p1 != p2) 
        {
            cout << "Happy Alex";
           	flag = 1;
           	break;
        }
    }
    if(flag == 0)
    	cout << "Poor Alex";
     return 0;
}