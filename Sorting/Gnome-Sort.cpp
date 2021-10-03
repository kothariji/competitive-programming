// Program of Gnome Sorting works well for partially sorted arrays.
#include <iostream> 
using namespace std; 

// A function to sort the algorithm using gnome sort 
void gnomeSortFunc(int *array, int n) 
{ 
    // Intialising the index variable to 0
	int i = 0; 
    // Checking if index value is less than size of array
	while(i < n){   
		if(i == 0){ 
			i++; 
        }
        //  checks if present element is larger than previous element
        // if larger then goes to right of array increments index
		if(array[i] >= array[i - 1]){ 
			i++; 
        }
        // else if present element is smaller then 
        // it swaps the two elements and goes to left decrements index value
        else{ 
			swap(array[i], array[i - 1]); 
			i--; 
		} 
	} 
	return; 
} 

// A utility function ot print an array of size n 
void printSortedArray(int array[], int size) 
{ 
	cout << "\nSorted Numbers after applying Gnome sort : "; 
	for (int i = 0; i < size; i++){
        cout<<array[i]<<" "; 
    } 
	cout<<"\n\n"; 
} 

// Driver program to test above functions. 
int main() 
{ 
	cout<<"---------------------------------------------------\n";
	cout<<"------------       Gnome Sort            ----------\n";
	cout<<"---------------------------------------------------\n";
	int n;

	cout<<"Enter the number of elements : ";
	cin>>n;
	int *array = new int[n];
	cout<<"\nEnter the  elements : ";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	gnomeSortFunc(array,n); 
	printSortedArray(array,n); 
	return 0; 
} 
/* Time Complexity is O(n^2) 
since the variable in loop in getting incremented and decremented also */