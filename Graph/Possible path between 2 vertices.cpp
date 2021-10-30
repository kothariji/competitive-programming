/*
* C++ program to count all paths from a source to a
* destination
*/
#include <vector>
#include <cassert>
#include <list>
#include<iostream>
using namespace std;

/*
* A directed graph using adjacency list representation;
* every vertex holds a list of all neighbouring vertices
* that can be reached from it.
*/
class Graph {
public:
	// Construct the graph given the number of vertices...
	Graph(int vertices);
	// Specify an edge between two vertices
	void add_edge(int src, int dst);
	// Call the recursive helper function to count all the
	// paths
	int count_paths(int src, int dst, int vertices);

private:
	int m_vertices;
	list<int>* m_neighbours;
	void path_counter(int src, int dst, int& path_count, vector<bool>visited);
};

Graph::Graph(int vertices)
{
	m_vertices = vertices; // unused!!
	/* An array of linked lists - each element corresponds
	to a vertex and will hold a list of neighbours...*/
	m_neighbours = new list<int>[vertices];
}

void Graph::add_edge(int src, int dst)
{
	m_neighbours[src].push_back(dst);
}

int Graph::count_paths(int src, int dst, int vertices)
{
	int path_count = 0;
	vector<bool>visited(vertices,false);
	path_counter(src, dst, path_count, visited);
	return path_count;
}

/*
* A recursive function that counts all paths from src to
* dst. Keep track of the count in the parameter.
*/
void Graph::path_counter(int src, int dst, int& path_count, vector<bool> visited)
{
	// If we've reached the destination, then increment
	// count...
	visited[src]=true;
if (src == dst) {
		path_count++;
	}
	// ...otherwise recurse into all neighbours...
	else {
		for (auto neighbour : m_neighbours[src]) {
		if(!visited[neighbour])
			path_counter(neighbour, dst, path_count, visited);
		}
	}
}

// Tests...
int main()
{
	// Create a graph given in the above diagram - see link
	Graph g(5);
	g.add_edge(0, 1);
	g.add_edge(0, 2);
	g.add_edge(0, 4);
	g.add_edge(1, 3);
	g.add_edge(1, 4);
	g.add_edge(2, 3);
	g.add_edge(2, 1);
	g.add_edge(3, 2);
	// Validate it...
	cout<<g.count_paths(0, 4,5);

	return 0;
}
