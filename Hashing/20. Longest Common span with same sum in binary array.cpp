//Naive Solution
//O(n^2) Time
//O(1) Aux Space

int maxCommon(bool arr1[], bool arr2[], int n)
{
    int res=0;
    for(int i=0; i<n;i++)
    {
        int sum1=0, sum2=0;

        for(int j=i; j<n;j++)
        {
            sum1+=arr1[j];
            sum2+=arr2[j];

            if(sum1 == sum2)
               res= max(res, j-i+1);
        }

        return res;
    }
}

//Hint: This problem is going to reduce into the problem of finding the longest subarray with 0 sum.

//O(n) Time and O(n) Aux Space
int top[n];
for(int i=0; i<n; i++)
{
    temp[i] = arr1[i] - arr2[i];
}
