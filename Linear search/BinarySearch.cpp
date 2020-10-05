#include<iostream>
using namespace std;

int binarysearch(int a[],int num,int start,int last)
{
    int mid;
    if(start<=last)
    {
        mid=start+((last-start)/2);
        if(a[mid]==num)
            return mid;
        else if(num<a[mid])
            return binarysearch(a,num,start,mid-1);
        else if(num>a[mid])
            return binarysearch(a,num,mid+1,last);
    }
    return -1;
}
int main()
{
    int siz,num,pos;
    cout<<"Enter the size of list :";
    cin>>siz;
    int *a=new int[siz];

    cout<<"\nEnter elements :";
    for(int i=0;i<siz;i++)
        cin>>a[i];

    cout<<"\n Enter the element to be searched:";
    cin>>num;

    pos=binarysearch(a,num,0,siz-1);
    if(pos==-1)
        cout<<"\n Element not found";
    else
        cout<<"\n Element found at position :"<<pos+1;
    return 0;
}
