#include <bits/stdc++.h>
using namespace std;

void printFrequency(int vec[],int n)
{
	map<int, int> M;

	for (int i = 0; i<n; i++) {
        int x=vec[i];
		M[x]++;
	}


	for (auto& it : M) {
		cout << it.first << ' '
			<< it.second << '\n';
	}
}


int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }

	printFrequency(a,n);
	return 0;
}
