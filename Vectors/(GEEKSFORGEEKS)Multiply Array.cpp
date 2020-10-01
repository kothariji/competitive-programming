#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while (t--)
	{
	    int n;
	    cin>>n;
	    int arr[n], product=1;
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        product *= arr[i];
	        
	    }
	    cout<<product<<endl;
	}
	return 0;
}