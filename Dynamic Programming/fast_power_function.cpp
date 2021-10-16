#include<iostream>
using namespace std;
int fast_power(int num,int power){
    if(power==0){
        return 1;
    }
    int p=fast_power(num,power/2);
    p*=p;
    if(power&1){
        return num*p;
    }
    return p;
}
int main(){
    int num,power;
    cin>>num>>power;
    int p=fast_power(num,power);
    cout<<p<<endl;
}