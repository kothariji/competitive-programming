//Pair with given sum in an unsorted array

//Naive Solution

bool isPair(int arr[], int n, int sum)
{
    for(int i=0; i<n;i++)
       for(int j=i+1; j<n;j++)
          if(arr[i]+arr[j] == sum)
             return true;

    return false;         
}


//Efficient Solution

bool isPair(int arr[], int n, int sum)
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.find(sum-arr[i]) != s.end())
                return true;

        s.insert(arr[i]);        
    }

    return false;
}