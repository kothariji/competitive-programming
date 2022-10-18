//problem : https://www.codechef.com/problems/CHN15A

#include <iostream>
using namespace std;

int main() {
    int t;

    //taking test case input
    cin>>t;

    // To run each test cases
    for(int tm=0;tm<t;tm++){
        int n,k,c=0;
        cin>> n >>k;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            //Since Gru knows that if the new characteristic value of a minion is divisible by 7, then it will have Wolverine-like mutations, thus increases c.
            if((a[i]+k)%7==0)
            c++;
        }
        
        //Here c will give total no. of Wolverine-like mutations.
        cout<<c<<endl;
    }

	return 0;
}
