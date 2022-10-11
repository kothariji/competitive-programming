#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int eve=0;
        
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            
            if(arr[i]%2==0)
            {
                eve++;
            }
            
        }
        
        if(eve==n || eve==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<eve<<endl;
        }
    }
	// your code goes here
	return 0;
}
