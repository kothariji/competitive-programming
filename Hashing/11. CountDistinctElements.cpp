//Naive Solution
// Time: Theta(n^2)
//space: O(1)


int countDist(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        bool flag= false;

        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag= true;
                break;
            }
        }
        if(flag==false)
        res++;
    }
    return res;
}


//Optimized Solution : using Unordered_set
// Time: theta(n)
// space: O(n)
int countDistinct(int arr[], int n)
{
    unordered_set<int>s;

    for(int i=0;i<n;i++)
      s.insert(arr[i]);

    return s.size();  

}



//More Optimized way of coding

// int countDistinct(int arr[], int n)
// {
//     unordered_set<int> s(arr, arr+n);
//     return s.size();
// }


