#include<stdio.h>
char s[402];
int sum[401][401],f[401];
inline int GetSum(int lx,int ly,int rx,int ry){
    return sum[rx][ry]-sum[rx][ly-1]-sum[lx-1][ry]+sum[lx-1][ly-1];
}
inline void Solve(){
    int n,m,i,j,k,ans=999999,cur;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%s",s+1);
        for(j=1;j<=m;j++){
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+(s[j]=='1');
        }
    }
    for(i=1;i!=n;i++){
        for(j=i+4;j<=n;j++){
            for(k=4;k<=m;k++){
                f[k]=GetSum(i+1,1,j-1,k-1)-GetSum(i,1,i,k-1)-GetSum(j,1,j,k-1)-GetSum(i+1,k,j-1,k)+(k<<1)+j-i-3;
            }
            for(k=m-1;k!=3;k--){
                if(f[k+1]<f[k]){
                    f[k]=f[k+1];
                }
            }
            for(k=1;k!=m-2;k++){
                cur=f[k+3]-GetSum(i+1,1,j-1,k)+GetSum(i,1,i,k)+GetSum(j,1,j,k)-(k<<1)-GetSum(i+1,k,j-1,k)+j-i-1;
                if(cur<ans){
                    ans=cur;
                }
            }
        }
    }
    printf("%d\n",ans);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t!=0){
        Solve();
        t--;
    }
    return 0;
}