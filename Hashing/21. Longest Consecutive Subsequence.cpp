//Naive :  HINT: We will use sorting based solution

int longestSub(int arr[], int n)
{
    sort(arr, arr+n);
    int res=1, curr = 1;
    for(int i=1; i<n;i++)
    {
        if(arr[i] == arr[i-1] + 1){curr++;}

        else if(arr[i]!= arr[i-1])
        {
            res= max(res, curr);
            curr=1;
        }
    }

    return max(res, curr);
}

//Efficient Method 
//Hints: 1. We first insert all elements in a hash table.
//       2. then with 2n lookups, we find the result.

int longestSub(int arr[], int n)
{
    unordered_set<int> h(arr, arr+h);
    int res=1;
    for(auto x:h)
    {
        if(h.find(x-1)== h.end())
        {
            int curr = 1;
            while(h.find(x+curr)!= h.end())
                curr++;

            res= max(res, curr);    
        }
    }

    return res;
}