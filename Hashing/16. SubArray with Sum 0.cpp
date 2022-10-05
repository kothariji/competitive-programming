// Naive Solution
// Time Complexity: O(n^2)

bool is0SubArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int curr_sum = 0;
        for(int j=i; j<n;j++)
        {
            curr_sum+= arr[j];
            if(curr_sum ==0)
               return true;
        }
    }

    return false;
}


//Efficient Solution Idea : Use Prefix Sum and Hashing
//time complexity: O(n)
bool is0SubArray(int arr[], int n)
{
    unordered_set<int> h;

    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(h.find(pre_sum)!= h.end())
           return true;

        if(pre_sum == 0)
           return true;

        h.insert(pre_sum);

    }

    return false;
}



 