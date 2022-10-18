// This is a cpp program for the algorithm binary search.
// It is a method to search for an element in an sorted array in O(logn).
// You can read more about binary search here : https://en.wikipedia.org/wiki/Binary_search_algorithm

#include <bits/stdc++.h>
using namespace std;

int bin_search(int array[],int n,int k)
{
	int l=0,r=n-1;
	while(r>=l)
	{
		int mid=l+(r-l)/2;
		if (array[mid]==k)
		{
			return mid;
		}
		if (array[mid]>k)
		{
			r=mid-1;
		}
		if (array[mid]<k)
		{
			l=mid+1;
		}
	}
	return -1;
}

int main()
{
	int array[]={1,4,9,16,25,36,49,64,81,100,121,144,169,196,225,256,289,324,361,400};
	int n=sizeof(array)/sizeof(array[0]);
	
	// Case 1 - When elemnt exits.
	int k=81;
	int val=bin_search(array,n,k);
	if (val==-1)
		cout<<"Elememt not found in the array.\n";
	else
		cout<<"Element "<<k<<" found at index "<<val<<".\n";

	// Case 2 - When element doesn't exist.
	k=120;
	val=bin_search(array,n,k);
	if (val==-1)
		cout<<"Elememt not found in the array.\n";
	else
		cout<<"Element "<<k<<" found at index "<<val<<"\n";
	return 0;
}