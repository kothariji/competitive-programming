//Naive Solution

int longestSub(bool arr[], int n)
{
    int res=0;
    for(int i=0; i<n;i++)
    {
        int c0=0, c1=0;

        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
               c0++;

            else
               c1++;

            if(c0==c1)
               res= max(res, j-i+1);      
        }
    }

    return res;
}


//Efficient Solution:

//Hint: This problem is going to reduce into the problem of finding length of longest subarray with 0 sum.


