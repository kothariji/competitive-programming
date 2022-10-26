#include<bits/stdc++.h>
using namespace std;

string stuff(string s, int fsz);
void deStuff(string s);

int main(){
    string st, s;
    int fsz;
    cout << "Enter the data := ";
    cin >> s;
    cout << "Enter the frame size := ";
    cin >> fsz;
    st = stuff(s, fsz);
    deStuff(st);
    return 0;
}

string stuff(string s, int fsz){
    int nof, n;
    string st;
    nof = (s.size()/(fsz-2))+1;
    n = s.size() + nof*2;
    int indx = 0;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(i%fsz==0) st+='#';
        else if(i%fsz==fsz-1) st+='#';
        else{
            if(s[indx]=='\0'){
               flag = true;
               break;
            }
            st+=s[indx];
            indx++;
        }
    }
    if(flag) st += '#';
    cout << "Stuffed data := " << st << "\n";
    return st;
}

void deStuff(string s){
    string deSt;
    for(int i = 0; i < s.size(); i++){
        if(s[i]!='#') deSt+=s[i];
    }
    cout << "DeStuffed data := " << deSt << "\n";
}
