#include<iostream>
using namespace std;

void bubble_sort(int A[], int size)
{
    int swapcount = 0;
    for(int i = 0; i <= size-1; i++)   // Running n times passes (Worst case)
    {
        for(int j = 0; j <= size-2-i; j++) // Here the inner loop size decreases with each pass.
        {
            swapcount = 0;
            if(A[j] > A[j+1])  // If the next element is smaller, then swap current and next
            {
               swap(A[j], A[j+1]);  // In built function of C++
               swapcount = swapcount + 1; 
            }
        }
        if(swapcount == 0)
            break;
    }
}


void display(int A[], int size)  // To display the array
{
  for(int i = 0; i < size; i++)
      cout<<A[i]<<" ";
  cout<<endl;
}

int main()  //Driver code
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  cout<<"Before sort: ";
  display(arr, n);
  bubble_sort(arr, n);
  cout<<"After sort: ";
  display(arr, n);
  return 0; 
}
