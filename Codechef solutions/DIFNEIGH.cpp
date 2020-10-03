#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int a[50][50];
    int i,j,k;
    for(k=0;k<50;k++){
        if(k%2==0){
            for(i=k;i<50;i++){
                if((i-k)%4==0||(i-k)%4==1)
                a[k][i]=1;
                else
                a[k][i]=2;
            }
            for(i=k+1;i<50;i++){
                if((i-k)%4==1||(i-k)%4==2)
                a[i][k]=2;
                else
                a[i][k]=1;
            }
        }
        else{
            for(i=k;i<50;i++){
                if((i-k)%4==0||(i-k)%4==1)
                a[k][i]=3;
                else
                a[k][i]=4;
            }
            for(i=k+1;i<50;i++){
                if((i-k)%4==1||(i-k)%4==2)
                a[i][k]=4;
                else
                a[i][k]=3;
            }
            
        }
    }
    cin>>t;
    while(t--){
        int n,m,mod;
        cin>>n>>m;
       // int a[n][m];
        //int i,j;
        if(n>=3&&m>=3){
            cout<<4<<endl;
            for(i=0;i<n;i++){
                for(j=0;j<m;j++)
                cout<<a[i][j]<<" ";
             cout<<endl;
            }
        }
       else if(n==1&&m==1){
           cout<<1<<endl<<1<<endl;
       }
       else if(n==1&&m==2){
           cout<<1<<endl<<1<<" "<<1<<endl;
       }
       else if(n==2&&m==1){
           cout<<1<<endl<<1<<endl<<1<<endl;
       }
       else if(n==1){
           cout<<2<<endl;
           for(i=0;i<m;i++){
               if(i%4==0||i%4==1)
               cout<<1<<" ";
               else
               cout<<2<<" ";
           }
           cout<<endl;
       }
       else if(m==1){
           cout<<2<<endl;
           for(i=0;i<n;i++){
               if(i%4==0||i%4==1)
               cout<<1<<endl;
               else
               cout<<2<<endl;
           }
       }
       else if(n==2&&m==2){
           cout<<2<<endl;
           cout<<1<<" "<<1<<endl;
           cout<<2<<" "<<2<<endl;
       }
       else if(n==2){
           cout<<3<<endl;
           for(i=0;i<m;i++){
               mod=i%6;
               if(mod==0||mod==1){
                   cout<<1<<" ";
               }
               else if(mod==2||mod==5){
                   cout<<3<<" ";
               }
               else{
                   cout<<2<<" ";
               }
           }
           cout<<endl;
           for(i=0;i<m;i++){
               mod=i%6;
               if(mod==0||mod==1){
                   cout<<2<<" ";
               }
               else if(mod==2||mod==5){
                   cout<<3<<" ";
               }
               else{
                   cout<<1<<" ";
               }
           }
           cout<<endl;
       }
       else if(m==2){
           cout<<3<<endl;
           for(i=0;i<n;i++){
               mod=i%3;
               if(mod==0){
                   cout<<1<<" "<<1<<endl;
               }
               else if(mod==1){
                   cout<<2<<" "<<2<<endl;
               }
               else{
                   cout<<3<<" "<<3<<endl;
               }
           }

       }
    }
    return 0;
}