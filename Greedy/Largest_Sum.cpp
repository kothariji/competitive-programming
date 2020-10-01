#include<bits/stdc++.h>
using namespace std;
string largestNumber(int n, int sum){
    string output(n, '0');
    for(int i = 0; i < n; i++)
    {
        int val = 0;
        if(sum > 9)
        {
            val = 9;
            sum -= 9;
        }
        else
        {
            val = sum;
            sum = 0;
        }
        
        output[i] = val + '0';
    }//for loop end;
    
    if(sum > 0)
    {
        return "-1";
    }
    
    return output;
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    cout<<largestNumber(n,sum);
    return 0;
}