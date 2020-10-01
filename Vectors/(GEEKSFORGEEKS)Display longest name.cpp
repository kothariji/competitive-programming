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
	        
	       string a[n];
	       
	    for(int i=0; i<n; i++)
	    {
	        
	        cin>>a[i];
	        
	        
	        
	    }
	    string max= " ";
	    int min=0;
	    for(int i=0; i<n; i++)
	    {
	        if(a[i].length()>min)
	        {
	            min = a[i].length();
	            max = a[i];
	        }
	        
	    }
	    cout<<max<<endl;
	}
	return 0;
}