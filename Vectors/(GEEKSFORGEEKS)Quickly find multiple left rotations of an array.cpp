#include<bits/stdc++.h> 
using namespace std; 
  
// Function to left rotate an array k times 
void leftRotate(int arr[], int n, int k) 
{ 
    // Print array after k rotations 
    cout<<"\nAns :"
    for (int i = k; i < k + n; i++) 
        cout << arr[i%n] << " "; 
} 
  

int main() 
{ 
    int n;
    cout<<"Enter Number of Elements in array : ";
    cin>>n;
    
    cout<<"\nEnter Elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    
    int k;
    cout<<"Enter number of Left rotations to be performed : ";
    cin>>k;
    leftRotate(arr, n, k); 
  
    return 0; 
}