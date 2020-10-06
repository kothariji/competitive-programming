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
	    int count=0;
	    for(int i=0; i<n; i++)
	    {
	        if (count<arr[i])
	        {
	            count = arr[i];
	            
	        }
	        
	    }
	    cout<<count<<endl;
        
	}
	return 0;
}






__________________________________________________________In Python____________________________________________________________

# initializing list
test_list = [2, 1, 6, 7, 10]

print("The original list is : " + str(test_list))
# printing result

print("The Largest : " , max(test_list))
