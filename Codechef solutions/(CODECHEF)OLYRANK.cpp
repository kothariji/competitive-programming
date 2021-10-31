#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int g1,s1,b1,g2,s2,b2,t;
	cin>>t;
	while(t--)
	{
	    cin>>g1>>s1>>b1>>g2>>s2>>b2;
	    int suma=0,sumb=0;
	    suma=g1+s1+b1;
	    sumb=g2+s2+b2;
	    if(suma>sumb) cout<<"1"<<endl;
	    else cout<<"2"<<endl;
	}
	return 0;
}