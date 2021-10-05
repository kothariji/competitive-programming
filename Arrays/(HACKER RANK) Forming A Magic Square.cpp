#include<stdio.h>
#include<math.h>
int ms0(int a[3][3])
{
    int sum;
    sum=abs(8-a[0][0])+abs(3-a[0][1])+abs(4-a[0][2])+abs(1-a[1][0])+abs(5-a[1][1])+abs(9-a[1][2])+abs(6-a[2][0])+abs(7-a[2][1])+abs(2-a[2][2]);
    return sum;
}

int ms1(int a[3][3])
{
    int sum;
    sum=abs(6-a[0][0])+abs(1-a[0][1])+abs(8-a[0][2])+abs(7-a[1][0])+abs(5-a[1][1])+abs(3-a[1][2])+abs(2-a[2][0])+abs(9-a[2][1])+abs(4-a[2][2]);
    return sum;
}
int ms2(int a[3][3])
{
    int sum;
    sum=abs(2-a[0][0])+abs(7-a[0][1])+abs(6-a[0][2])+abs(9-a[1][0])+abs(5-a[1][1])+abs(1-a[1][2])+abs(4-a[2][0])+abs(3-a[2][1])+abs(8-a[2][2]);
    return sum;
}
int ms3(int a[3][3])
{
    int sum;
    sum=abs(4-a[0][0])+abs(9-a[0][1])+abs(2-a[0][2])+abs(3-a[1][0])+abs(5-a[1][1])+abs(7-a[1][2])+abs(8-a[2][0])+abs(1-a[2][1])+abs(6-a[2][2]);
    return sum;
}
int ms4(int a[3][3])
{
    int sum;
    sum=abs(8-a[0][0])+abs(1-a[0][1])+abs(6-a[0][2])+abs(3-a[1][0])+abs(5-a[1][1])+abs(7-a[1][2])+abs(4-a[2][0])+abs(9-a[2][1])+abs(2-a[2][2]);
    return sum;
}
int ms5(int a[3][3])
{
    int sum;
    sum=abs(6-a[0][0])+abs(7-a[0][1])+abs(2-a[0][2])+abs(1-a[1][0])+abs(5-a[1][1])+abs(9-a[1][2])+abs(8-a[2][0])+abs(3-a[2][1])+abs(4-a[2][2]);
    return sum;
}
int ms6(int a[3][3])
{
    int sum;
    sum=abs(2-a[0][0])+abs(9-a[0][1])+abs(4-a[0][2])+abs(7-a[1][0])+abs(5-a[1][1])+abs(3-a[1][2])+abs(6-a[2][0])+abs(1-a[2][1])+abs(8-a[2][2]);
    return sum;
}
int ms7(int a[3][3])
{
    int sum;
    sum=abs(4-a[0][0])+abs(3-a[0][1])+abs(8-a[0][2])+abs(9-a[1][0])+abs(5-a[1][1])+abs(1-a[1][2])+abs(2-a[2][0])+abs(7-a[2][1])+abs(6-a[2][2]);
    return sum;
}
int main()
{
    int a[3][3],i,j,sum=0;
    int b[8];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    b[0]=ms0(a);
    b[1]=ms1(a);
    b[2]=ms2(a);
    b[3]=ms3(a);
    b[4]=ms4(a);
    b[5]=ms5(a);
    b[6]=ms6(a);
    b[7]=ms7(a);
    int min=b[0];
    for(i=0;i<8;i++)
    {
        if(min>b[i])
        min=b[i];
    }
    printf("%d",min);
}