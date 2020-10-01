/*
Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.
Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will not be same for a train, but we can have arrival time of one train equal to departure of the other.
In such cases, we need different platforms, i.e at any given instance of time, same platform can not be used for both departure of a train and arrival of another.
*/

//solution
int findPlatform(int arr[], int dep[], int n)
{
	sort(arr,arr+n);
	sort(dep,dep+n);
	int platform=1;
	int i=1,j=0,ans=1;
	while(i<n && j<n)
	{
	    if(dep[j]>=arr[i])  //platform needed due to time clashing
	    {
	        platform++;
	        i++;
	        if(platform>ans)    ans=platform;
	    }
	    else
	    {
	        j++;
	        platform--;
	    }
	}
	return ans;
}