#include <stdio.h>

int main(){

int a[10],i,n,s;
printf("Enter no of elements:");
scanf("%d",&n);

printf("Element to search:");
scanf("%d",&s);

for(i=0;i<n;i++){
        printf("Enter no%d:",i+1);
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
if(s==a[i]){
        printf("%d is present at location: %d",s,i);
}
}


}
