//Hint:-

/*We have to count in how minimum number of times the stick can be broken, so basically we have to find how many unique
elements are there in the array,if it is 0 then continue,if two similar elements are present then don't count , else add
one to count*/

#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T,i;        //T=No. of test cases
    cin>>T;
    while(T--){
    int n;          //n=no. of elements in the array
    cin>>n;
    int a[n];        //a[n]=Array
    for(i=0;i<n;i++)
        cin>>a[i];
     int count=0;
     for(i=0;i<n;i++){
        if(a[i]==0){
            continue;
        }

        if(a[i+1]==a[i])
            count+=0;
       else
            count+=1;
     }
    cout <<count<< endl;
    }
    return 0;
}
