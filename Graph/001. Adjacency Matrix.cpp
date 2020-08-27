#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int no_of_vertex, no_of_edges;
	cout<<"Enter the number of vertices: ";
	cin>>no_of_vertex;
	int a[no_of_vertex+1][no_of_vertex+1];

	memset(a, 0, sizeof(a));
	int i, j;
	cout<<"Enter the number of edges: ";
	cin>>no_of_edges;

	for(int edge = 1; edge <= no_of_edges; edge++)
	{
		cout<<"Enter the vertices for edge "<<edge<<": ";
		cin>>i>>j;
		a[i][j] = a[j][i] = 1;
	}

	for(i = 1; i<no_of_vertex+1; i++){

		for(j = 1; j<no_of_vertex+1; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
