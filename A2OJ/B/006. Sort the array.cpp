#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main() 
{
	fast;
	ll n;
	cin >> n;
	ll arr[n];
	for (ll i = 0; i < n; i++)
	{
	    cin >> arr[i];
	}
	ll start = 0, end = 0;
	ll notification = 0;
	int flag = 0, pass = 0;
	
	// Checking if the given array is already sorted or not
	for (ll i = 0; i < n - 1; i++)
	{
	    if (arr[i] > arr[i + 1])
	    {
	        pass = 1;
	        break;
	    }
	}
	
	
	
	
	if (pass == 1)         //If sorted, perform the following operation
	{
		
		
             // This code detects the first good segment in array
             for (ll i = 0; i < n - 1; i++)
             {
                  if (arr[i] > arr[i + 1] && end == 0)
                  {
                        flag = 1;
                       if (notification == 0)
                       {
                           start = i;
                           notification = 1;
                       }
            
                  }
                  else if (arr[i] > arr[i+1] && end != 0)
                  {
                      cout << "no" << "\n";
                      return 0;
                  }
                  else if (arr[i] < arr[i + 1])
                  {
                      if (flag == 1)
                      {
                           end = i;
                           break;
                      }
                      flag = 0;
                  }
             }
             if (end == 0)
             {
                 end = n - 1;
             }
             reverse(arr + start, arr + end + 1);
   
            // Checking if the array is sorted or not
             for (ll i = 0; i < n - 1; i++)
             {
                  if (arr[i] > arr[i + 1])
                  {
                        cout << "no" << "\n";
                        return 0;
                  }
             }
             cout << "yes" << "\n";
             cout << start + 1 << " " << end + 1 << "\n";
	}
	else                      // If given array is already sorted
	{
	    cout << "yes" << "\n";
	    cout << 1 << " " << 1 << "\n";
	}
	return 0;
}
