// two pointer approach ( applicable on sorted array)
// given a sorted array and a sum , find if there is a pair with given sum
// logic: we begin two pointers , one from left corner and the other from right corner
//        we calculate the sum , if the sum is greater than required we move the right pointer ,
//        else move the left pointer . if both right and left pointer comes at same position we stop

#include<bits/stdc++.h>
using namespace std;

bool checkpair(int a[],int n,int s)
{
    // left pointer
    int l=0;

    // right pointer
    int r=n-1;

    while(l<r)
    {
        if(a[l]+a[r]==s)
        return true;
        if(a[l]+a[r]>s)
        r--;
        else
        l++;
    }
    return false;


}
int main()
{
    int n;
    cin>>n;
    int a[n],s;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>s;
    cout<<checkpair(a,n,s);
    return 0;
}