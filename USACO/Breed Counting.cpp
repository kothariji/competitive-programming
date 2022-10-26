#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("bcount.in","r",stdin);
    freopen("bcount.out","w",stdout);
    int a[100011],b[100011],c[100011],q,n,val;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        if(val==1)
        {
            a[i]=1;
            b[i]=0;
            c[i]=0;
        }
        else if(val==2)
        {
            a[i]=0;
            b[i]=1;
            c[i]=0;
        }
        else if(val==3)
        {
            a[i]=0;
            a[i]=0;
            c[i]=1;
        }
    }
    for(int i=1;i<n;i++)a[i]+=a[i-1];
    for(int i=1;i<n;i++)b[i]+=b[i-1];
    for(int i=1;i<n;i++)c[i]+=c[i-1];

   /* for(int i=0;i<n;i++)cout<<a[i]<<' ';
    cout<<endl;
    for(int i=0;i<n;i++)cout<<b[i]<<' ';
    cout<<endl;
    for(int i=0;i<n;i++)cout<<c[i]<<' ';
    cout<<endl;
*/
    int l,r;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r;
        l--;
        r--;
        if(l<=0)
        {
            cout<<a[r]<<' '<<b[r]<<' '<<c[r]<<"\n";
        }
        else
        {
            //cout<<b[r]<<' '<<b[l-1]<<endl;
            cout<<a[r]-a[l-1]<<' '<<b[r]-b[l-1]<<' '<<c[r]-c[l-1]<<"\n";
        }
    }
}
