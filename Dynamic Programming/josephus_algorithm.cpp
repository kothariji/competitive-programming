// Author : Sundar

/*Problem : N people are standing in a circle and we continuously eliminate the M th person 
starting from the first. Find the peson who is not eliminated and is still standing in the circle

    Sample Input: 5 2
    Ans : 3
    The 3rd person is the person who is not eliminated.
*/

#include<iostream>
using namespace std;
int josephus_iterative(int N,int M)
{
    int res=0;
    for(int i=1;i<=N;i++)
    {
        res=(res+M)%i;
    }
    return res+1;
}
int josephus_recursive(int N,int M)
{
    if(N==1)
        return 1;
    int a=josephus_recursive(N-1,M);
    return (a+M-1)%N+1;
}



int main()
{
    int N,M;
    //N - number of people in the circle
    //M - people from the current location to be eliminated
    cin>>N>>M;
    
    
    cout<<"The Last Standing person derived using ITERATION : "<<josephus_iterative(N,M)<<'\n';
    cout<<"The Last Standing person derived using RECURSION : "<<josephus_recursive(N,M)<<'\n';
    return 0;
}