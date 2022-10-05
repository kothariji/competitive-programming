//Naive Solution : O((n-k)*k*k)

void printDistWind(int arr[], int n, int k)
{
    for(int i=0; i<=n-k; i++)
    {
        int count =0;
        for(int j=0; j<k;j++
        {
            bool flag= false;
            for(int p=0; p<j;p++)
            {
                if(arr[i+j] == arr[i+p])
                {
                    flag= true; 
                    break;
                }
            }

            if(flag==false)
              count++;
        }

        cout<<count<<" ";
    }
}


//Steps to approach Efficient Solution:

// 1. Create a frequency map of first k stems
// freq[10]=3, freq[20]=1

// 2. Print size of the frequency map.

// 3. for(int i=k; i<n; i++)
    
//     a.) Decrease frequency of arr[i-k].
//     b.) If the frequency of arr[i-k] becomes 0, remove it from the map.
//     c.) If arr[i] does not exist in the map, insert it.
//         Else Increase its frequency in the map.
//     d.) Print the size of map.   


// Time Complexity: O(n)
// Aux Space: O(k)


#include<bits/stdc++.h>
using namespace std;

void printDistinct(int arr[], int n, int k)
{
    map<int , int> m;
    for(int i=0; i<k; i++)
    {
        m[arr[i]] +=1;
    }

    cout<<m.size()<<" ";

    for(int i=k; i<n;i++)
    {
        m[arr[i-k]] -= 1;
        if(m[arr[i-k]]==0){
            m.erase(arr[i-k]);
        }

        m[arr[i]]+=1;

        cout<<m.size()<<" ";
    }
}

int main()
{
    int arr[]= {10, 10, 5, 3, 20, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int k=4;
    printDistinct(arr,n,k);
}