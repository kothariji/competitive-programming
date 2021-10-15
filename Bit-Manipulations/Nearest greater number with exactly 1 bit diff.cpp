#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find next greater number than N  
// with exactly one bit different in binary 
// representation of N 
long long nextGreater(long long N) 
{ 
    long long power_of_2 = 1, shift_count = 0; 
  
    // It is guaranteed that there  
    // is a bit zero in the number 
    while (true) { 
        // If the shifted bit is zero then break 
        if (((N >> shift_count) & 1) % 2 == 0) 
            break; 
  
        // increase the bit shift 
        shift_count++; 
  
        // increase the power of 2 
        power_of_2 = power_of_2 * 2; 
    } 
  
    // set the lowest bit of the number 
    return (N + power_of_2); 
} 
  
int main() 
{ 
    long long N ;
    cout<<"Enter the number";
    cin>>N;
    cout << "The next number is = " << nextGreater(N); 
  
    return 0; 
} 
