#include <iostream>
using namespace std;

int main()
{   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    
    int n;
    cin>>n;
    while(n-->0){
        int l;
        cin>>l;
        cout<<(l/2+1)<<"\n";
    }
    
	return 0;
}
