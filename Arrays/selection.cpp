#include<iostream>
using namespace std;

int minindex(int A[], int start, int end)
{
    int index = start;
    for(int i = start; i <= end; i++)
    {
        if(A[index] > A[i])
            index = i;
    }
    return index; 
}    


void selection_sort(int A[], int n)
{
    for(int i = 0; i <= n-1; i++)
    {
        int temp;
        temp = minindex(A, i, n-1);
        swap(A[i], A[temp]); // On each pass, we add one element to it's sorted position.
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
    selection_sort(arr, n);
    cout<<"After sort ";
    display(arr, n);
    return 0;
    
}
