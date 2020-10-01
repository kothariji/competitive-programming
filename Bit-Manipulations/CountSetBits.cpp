#include<iostream>
using namespace std;

int countSetBits(int n){
    int count=0;
    while(n>0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int countSetBitsFast(int n){
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    cout <<  countSetBitsFast(5);
    return 0;
}