#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    int x;
	    cin>>x;
	    int answer = 0;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]<=x)
	        {
	            answer++;
	        }
	               
	    }
	    cout<<answer<<endl;
	}
	return 0;
}