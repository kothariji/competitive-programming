#include<bits/stdc++.h>
using namespace std;

class Solution{
     public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
        int curr = 0;
        int max_tillNow = arr[0];
        
        for(int i=0; i<n; i++)
        {
            curr += arr[i];
            // max_tillNow = max(max_tillNow, curr);
            
            if(curr > max_tillNow)
            {
                max_tillNow = curr;
            }
            
            if(curr<0)
            {
                curr = 0;
            }
        }
        
        return max_tillNow;
        
    }
};

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
