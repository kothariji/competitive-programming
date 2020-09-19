#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int x, y, ans = 0; 
		cin>>x>>y;
    if(y <= 0 && x > y && x <= -y + 1)
    	ans = - 4 * y;
    else if(x > 0 && y > -x + 1 && y <= x)
    	ans = 4 * x - 3;
    else if(y > 0 && x >= -y && x < y)
    	ans = 4 * y - 2;
    else if(x < 0 && y >= x && y < -x )
    	ans = -4 * x - 1;

    cout<<ans;
    return 0;
}

