#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void BucketSort(vector<float> &array )//function to sort the float array by bucket sort
{
    int n=array.size();
    vector<float> b[n];//Creates n empty buckets
    
    for(int i=0;i<n;++i)//Categorizes the elements into different buckets
    {
        int z=n*array[i];
        b[z].push_back(array[i]);
    }
    
    for(int i=0;i<n;++i)
    {
        sort(b[i].begin(),b[i].end());//Sorts the invidual buckets
    }
    
    int cursor=0;
    
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<b[i].size();++j)
        {
            array[cursor]=b[i][j];//Merges back all the sorted buckets
            cursor++;
        }
    }
}

int main()
{
    float arr[] = { 0.697, 0.765, 0.456, 0.9234, 0.865, 0.2434 };
    //array is predefined here, please take input from the user to work accordingly by modifying the code
    int n = sizeof(arr) / sizeof(arr[0]); 
    vector<float> ar(arr,arr+n);
    BucketSort(ar);
    cout<<"Float Array after sorting is:\n";
    for(int i=0;i<n;++i)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}