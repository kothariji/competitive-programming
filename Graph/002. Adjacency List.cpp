#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

int main()
{
	int no_of_vertex, no_of_edges;
	cout<<"Enter the number of vertices: ";
	cin>>no_of_vertex;

	vector <int> v1[no_of_vertex +1];

	int i, j;
	cout<<"Enter the number of edges: ";
	cin>>no_of_edges;

	for(int edge = 1; edge <= no_of_edges; edge++)
	{
		cout<<"Enter the vertices for edge "<<edge<<": ";
		cin>>i>>j;
		v1[i].push_back(j);
		v1[j].push_back(i);
	}

	for(i = 1; i <= no_of_vertex; i++){

		for(j = 0; j < v1[i].size(); j++)
			cout<<v1[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
