//Naive Approach
//Time Complexity : O(n^2)
//Aux Space : O(1)

#include<bits/stdc++.h>
using namespace std;

void prinFreq (int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag= false;
        for(int j=0;j<i;j++)
          if(arr[i]==arr[j]) { flag = true; break; }

        if(flag== true)
          continue;

        int freq = 1;
        for(int j= i+1; j<n; j++)
           if(arr[i]==arr[j])
              freq++;

        cout<<arr[i]<<" "<<freq<<endl;          
    }
}


//Efficient Solution
int countFreq(int arr[], int n)
{
    unordered_map<int , int> h;
    for(int i=0;i<n;i++)
       h[arr[i]]++;

    for(auto e: h)
       cout<<e.first<<" "<<e.second<<endl;   
}

//Aux Space: O(n)
//TIme Complexity: Theta(n)