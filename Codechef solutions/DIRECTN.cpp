#include <iostream>
using namespace std;

int main(){
    int T, n;
    cin>>T;
    while(T--){
        int check = 0;
       cin>>n;
       string arr;
       cin>>arr;
       for(int j =0;j<arr.size();j++){
           if (arr[j] == 'R' && arr[j+1] =='R'){
               check = 1;
           }
           if (arr[j] == 'L' && arr[j+1] =='L'){
               check = 1;
           }
       }
       if (check){
           cout<<"Yes"<<endl;
       }
       else{
           cout<<"No"<<endl;
       }
    }
    return 0;
}