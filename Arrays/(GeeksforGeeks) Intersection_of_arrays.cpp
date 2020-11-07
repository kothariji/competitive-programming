// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;
int NumberofElementsInIntersection(int a[], int b[], int n, int m);

// } Driver Code Ends

//User function template for C++

// Given two arrays A and B and their sizes N and M respectively
int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
    // Your code goes here
    int countCommon = 0, index;
    map<int, int> mp;
    for (index = 0; index < n; index++)
    {
        mp[a[index]]++;
    }
    for (index = 0; index < m; index++)
    {
        if (mp.find(b[index]) != mp.end())
        {
            countCommon++;
            mp.erase(b[index]);
        }
    }
    return countCommon;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];

        cout << NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
} // } Driver Code Ends