//The following code is the solution to Problem 1(WATERMELON) of September Lunchtime 2020 hosted on www.codechef.com.
//The question can be found here : https://www.codechef.com/LTIME88B/problems/WATMELON
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int sum=0;
	    for(int i=0;i<n;i++)//just take the input from the user and calculate the sum of all the elements in a particular test case.
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    if(sum>=0)//if the sum is equal to 0 or greater than 0, then it can be converted to a "good" sequence, otherwise not.
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
