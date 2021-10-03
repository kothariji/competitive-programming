#include <stdio.h>

int n,order[1000000],c,orderc[1000000],j;//c = curreent value of n in each test case. ; j=Position of Josh
//orderc[]=changed order
void inputOrder();
void reorder(int j);
void kill(int atp);
void clear(int arr[1000000]);

int main()
{
    int t,atp,f,last,jpos;//atp=Attacking Position ; t=no. of test cases. ;
    scanf("%d",&t);
    while(t>0)
    {                       
        scanf("%d",&n);
        c=n;
        inputOrder();
        scanf("%d",&f);
        atp=0;
        for(j=0;j<=n;++j)//Positions of Josh
        {
            jpos=j;
            reorder(j);
            while(c>2)
            {
                if(atp!=j)
                kill(atp);
            }
            //Attack by Chefland's full firepower F
            orderc[j]+=f;
            
            if(j==0)last=1;
            else last=0;
            
            if(orderc[last]<=f)
            {
                printf("possible\n");
                printf("%d %d\n",jpos,orderc[j]);
                break;
            }
            
            if(orderc[last]>f && j==n)
            {
                printf("impossible\n");
            }
            clear(orderc);
        }
        clear(order);
        clear(orderc);
        --t;
    }
    return 0;
}

void inputOrder()
{
    int i;
    for(i=0;i<n-1;++i)
    {
        scanf("%d",&order[i]);
    }
}

void reorder(int j)
{
    int i;
    for(i=0;i<n-1;++i)
    {
        orderc[i]=order[i];
    }
    for(i=n-2;i>=j;--i)
    {
        orderc[i+1]=orderc[i];
    }
    orderc[j]=0;
}

void kill(int atp)
{
    int i;
    if(atp<=c-2 && (atp+1)!=j)
    {
        for(i=atp+1;i<c-1;++i) { orderc[i]=orderc[i+1]; }
        orderc[c-1]=NULL;
        c=c-1;
        if(atp<j)--j;
    }
    if(atp==c-1 && j!=0)
    {
        for(i=0;i<c-1;++i) { orderc[i]=orderc[i+1]; }
        orderc[c-1]=NULL;
        c=c-1;--j;
    }
    if(atp<=c-2 && (atp+1)==j) { orderc[j]= orderc[j] + orderc[atp]; }
    if(atp==c-1 && j==0) { orderc[j]= orderc[j] + orderc[atp]; }
}

void clear(int arr[1000000])
{
    int i=0;
    while(arr[i]!=NULL)
    {
        arr[i]=NULL;
        ++i;
    }
}










