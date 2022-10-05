#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while (T--){
        int N,X;
        cin>>N>>X;
        if (X>ceil(N/2.0)) cout<<-1<<endl;
        else{
            string S="";
            char c='a';
            int count=1 ;
            for (int i=0;i<ceil(N/2.0);i++){
                S+=c;
                if (count<X) c++;
                else c='a';
                count++;
            }
            string temp=S;
            if (N==1) cout<<"a"<<endl;
            else{
                if (N%2){
                    reverse(temp.begin(),temp.end()-1);
                    temp.pop_back();
                }
                else reverse(temp.begin(),temp.end());
                S+=temp;
                cout<<S<<endl;
            }
        }
    }
	return 0;
}
