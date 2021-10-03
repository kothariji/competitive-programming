using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long N,num=0;
    double width,height,val;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>width>>height;
        if(width>height)
            val=width/height;
        else
            val=height/width;
        if(val>=1.6 &&val <= 1.70)
        {
            num++;
        }

    }
    cout<<num;
    return 0;
}
