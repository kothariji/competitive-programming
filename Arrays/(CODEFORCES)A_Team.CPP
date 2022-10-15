#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip> 
#include<cstdarg>
using namespace std;

#define F first 
#define S second 
#define PB push_back
#define MP make_pair

int main() {
	// your code goes here
	int t, count=0;
	cin>>t;
	while(t--) {
		int petya, vtsya, tonya;
		cin>>petya>>vtsya>>tonya;
		if(petya+vtsya+tonya>=2)
			count++;
	}
	cout<<count;
	return 0;
}
