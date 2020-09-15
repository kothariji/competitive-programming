#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef signed long long int lli;

ulli *arr=new ulli[5000001];
    
ulli countchain(ulli num)
{
    ulli temp=0;
//    cout<<num<<" : "<<arr[num]<<endl;
    if(arr[num]!=0)
    {
        return arr[num];
    }
    if(num%2==0)
    {
        temp=num/2;
        arr[num]=1+countchain(temp);
        return arr[num];
    }
    temp=num*3+1;
    ulli count=1;
    while(temp>5000001)
    {
        
        
        if(temp%2==0)
        {
            temp/=2;
        }
        else
        {
            temp=temp*3+1;
        }
        count++;
    }
    arr[num]=count+countchain(temp);
    return arr[num];
    
}
int main()
{
     
         memset(arr,0,sizeof(arr));
         ulli count=0;
         arr[1]=1;
         for(ulli a=2;a<=5000001;a=a*2)
         {            
             ++count;
             arr[a]=count;            
        }
        for(ulli a=1;a<=5000001;++a)
        {
            //cout<<a<<" : "<<countchain(a)<<endl;
            countchain(a);
        }
    
        ulli *results=new ulli[5000001];
        results[1]=1;
        for(ulli a=2;a<=5000001;++a)
        {
            if(arr[a]>=arr[results[a-1]])
            {
                results[a]=a;
            }
            else
            {
                results[a]=results[a-1];
            }
        }
        ulli test_case=0;
        cin>>test_case;
        ulli end_number,max_answer=0,result=0;
        while(test_case--)
        {
            cin>>end_number;
            cout<<results[end_number]<<endl;
            
        }
        delete[] results;
        delete[] arr;    
        return 0;
}
