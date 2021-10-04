#include <stdio.h>

void main(){


int largest,temp,n;
int a[10];
printf("Enter no of elements:");//5
scanf("%d",&n);
//{9,8,4,2,1}
    for(int i=0;i<n;++i)
    {
        printf("Enter element%d: ",i+1);
        scanf("%d",&a[i]);
    }

for(int j=0;j<n-1;j++){
for(int i=0; i<n-1-j;i++){

    if(a[i]>a[i+1]){
        temp =a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

}
}
printf("\n");
for(int k=0; k<n;k++){
    printf("%d",a[k]);
}
}
