#include<iostream>
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
	            count=arr[i];
	        }
	        
	    }
	    cout<<count<<" ";
	    int bout=100;
	    for(int i=0; i<n; i++)
	    {
	        if (bout>arr[i])
	        {
	            bout=arr[i];
	        }
	    }
	    cout<<bout<<endl;
	}
	return 0;
}




____________________________________________________________In Python______________________________________________________
# initializing list
test_list = [2, 1, 6, 7, 10]

print("The original list is : " + str(test_list))
# printing result
print("The Smallest: " ,min(test_list))
print("The Largest : " , max(test_list))
