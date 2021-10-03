https://codeforces.com/contest/1494/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1e9 + 7

bool isBalanced1(string exp) 
{ 
   // return false;  

    bool flag = true; 
    bool flag2 = true; 
    int count = 0; 
  
    for (int i = 0; exp[i] != '\0'; i++) { 
  
        if (exp[i] == 'A') { 
            count++; 
        } 
        else { 
            count--; 
        } 
        if (count < 0) { 
            flag = false; 
            break; 
        } 
    } 
    if (count != 0) { 
        flag = false; 
    } 
  
   count = 0;
     for (int i = 0; exp[i] != '\0'; i++) { 
  
        if (exp[i] == 'C' || exp[i] == 'B') { 
            count++; 
        } 
        else { 
            count--; 
        } 
        if (count < 0) { 
            flag2 = false; 
            break; 
        } 
    } 
    if (count != 0) { 
        flag2 = false; 
    } 
  
    if (flag) return true;
    if(flag2) return true;
    return false;  
} 

bool isBalanced2(string exp) 
{ 

  //  return false;  

    bool flag = true; 
    bool flag2 = true; 

    int count = 0; 
  
    for (int i = 0; exp[i] != '\0'; i++) { 
  
        if (exp[i] == 'B') { 
            count++; 
        } 
        else { 
            count--; 
        } 
        if (count < 0) { 
            flag = false; 
            break; 
        } 
    } 
    if (count != 0) { 
        flag = false; 
    } 

    count = 0;
     for (int i = 0; exp[i] != '\0'; i++) { 
  
        if (exp[i] == 'C' || exp[i] == 'A') { 
            count++; 
        } 
        else { 
            count--; 
        } 
        if (count < 0) { 
            flag2 = false; 
            break; 
        } 
    } 
    if (count != 0) { 
        flag2 = false; 
    } 
  
   if (flag) return true;
    if(flag2) return true;
    return false;  
} 

bool isBalanced3(string exp) 
{ 

   // return false;  

    bool flag = true; 
    bool flag2 = true; 

    int count = 0; 
  
    for (int i = 0; exp[i] != '\0'; i++) { 
  
        if (exp[i] == 'C') { 
            count++; 
        } 
        else { 
            count--; 
        } 
        if (count < 0) { 
            flag = false; 
            break; 
        } 
    } 
    if (count != 0) { 
        flag = false; 
    } 
  
   count = 0;
     for (int i = 0; exp[i] != '\0'; i++) { 
  
        if (exp[i] == 'B' || exp[i] == 'A') { 
            count++; 
        } 
        else { 
            count--; 
        } 
        if (count < 0) { 
            flag2 = false; 
            break; 
        } 
    } 
    if (count != 0) { 
        flag2 = false; 
    } 

  
   if (flag == true) return true;
    if(flag2 == true) return true;
    return false;  
} 

void solve(){

    string a;
    cin>>a;
    int n = a.length();

    int ca = 0,cb = 0,cc = 0;

    for(int i=0; i<n; i++){
        if(a[i] == 'A') ca++;
        if(a[i] == 'B') cb++;
        if(a[i] == 'C') cc++;
    }

    if(ca == (cb+cc) ){
        if(isBalanced1(a)){
            cout<<"YES"<<endl;
            return;
        }
    } 

    if(cb == (ca+cc) ){
        if(isBalanced2(a)){
            cout<<"YES"<<endl;
            return;
        }
    } 

    if(cc == (cb+ca) ){
        if(isBalanced3(a)){
            cout<<"YES"<<endl;
            return;
        }
    } 

    cout<<"NO"<<endl;
    return;

}

int main(){

    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}