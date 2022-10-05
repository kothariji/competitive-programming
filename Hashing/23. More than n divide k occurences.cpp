//Naive Solution
//Time Complexity: O(nlogn)

void printNbyK(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int i=1, count =1;
    while(i<n)
    {
        while(i<n && arr[i] = arr[i-1])
        {
            count++;
            i++;
        }

        if(count > n/k)
        {
            print(arr[i-1]+ " ");
        }

        count = 1;
        i++;
    }
}



//Efficient Solution: 
//Time Complexity: Theta(n)

void printNbyK(int arr[], int n, int k)
{
    unordered_map<int , int> m;
    for(int i=0; i<n;i++)
    {
        m[arr[i]]++;
    }

    for(auto e: m)
      if(e.second > n/k)
         cout<<e.first<<" ";
}


//O(nk) Solution which is the most efficient solution
//It is an extension of Moore's Voting Algorithm

//  res<= k-1

//Important Steps :

// 1. Create an Empty Map m

// 2. for(i=0; i<n;i++)
//    a.) if(m contains arr[i])
//         m[arr[i]]++;
//    b.) else if m.size() is less than (k-1)
//    c.) else
//             Decrease all values in m by one. If value becomes 0 , then remove it.

// 3. For all elements in m, print the elements that actually more than n/k times.


#include<bits/stdc++.h>
using namespace std;

void printNByK(int arr[], int n, int k)
{
    unordered_map<int , int> m;

    for(int i=0; i<n; i++)
    {
        if(m.find(arr[i])!=m.end())
            m[arr[i]]++;

        else if(m.size() < k-1)
            m[arr[i]]=1;

        else  
            for(auto x:m){
                x.second--;

                if(x.second ==0)
                   m.erase(x.first);
            }

    }            

        for(auto x:m)
        {
            int count = 0;
            for(int i=0;i<n;i++)
            {
                if(x.first == arr[i])
                  count++;
            }

            if(count > n/k)
                cout<< x.first<<" ";
        }            
}


int main()
{
    int arr[] = {30, 10, 20, 20, 20 , 10, 40, 30 , 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=4;
    printNByK(arr, n,k);
}
