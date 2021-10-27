#include<iostream>
using namespace std;

void insertion_sort(int A[], int size)
{
    for(int i = 1; i <= size-1; i++)  // Outer loop is used to pick elements in the array
    {
        int temp = A[i];   // temp varriable is used for comparisons
        for(int j = i-1; j >= 0; j--) // This inner loop is used to iterate in the sorted array backwards
        {
            if(A[j] > temp)  // If the element is greater than temp,
            {                // then push it by one index and store the number in the newly empty space
                A[j+1] = A[j]; 
                A[j] = temp;
            }
            else           // If any element is smaller than or equal to the temp element, break it.
                break;  
        }
    }
}

void display(int A[], int size)  // To display the array
{
    for(int i = 0; i < size; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int main()  // Driver code
{
    int n = 5;
    int arr[] = {8, 7, 5, 1, 2};
    cout<<"Before sort ";
    display(arr, n);
    insertion_sort(arr, n);
    cout<<"After sort ";
    display(arr, n);
    return 0;
    
}
