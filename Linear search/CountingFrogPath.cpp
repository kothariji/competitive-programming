using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long X,Y,S,T;
    cin>>X>>Y>>S>>T;
    T-=X+Y;
    cout<<T<<"'";
    cout<<pow(3,T);
    return 0;
}
