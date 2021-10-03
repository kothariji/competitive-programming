#include<bits/stdc++.h>
using namespace std;
struct Job
{
    int deadline;
    int profit;
};
bool compare(struct Job a, struct Job b)
{
    return a.profit>b.profit;
}
int jobSequencing(Job arr[], int n)
{
    sort(arr,arr+n,compare);    //array sorted according to profit
    bool visit[n]={false};
    int max_profit=0;
    for(int i=0;i<n;i++)
    {
        for(int j=min(n,arr[i].deadline-1);j>=0;j--)
        {
            if(visit[j]==false)
            {
                visit[j]=true;
                max_profit+=arr[i].profit;
                break;
            }
        }
    }
    return max_profit;
}
int main()
{
    int n,capacity;
    //array of structures
    cin>>n;
    Job arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].deadline>>arr[i].profit;   
    }
    cout<<jobSequencing(arr,n);
    return 0;
}