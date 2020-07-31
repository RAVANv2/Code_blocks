#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V;
	// Pointer of V list
	vector<vector<int> > l;
public:
	// Constructor
	Graph(int v)
	{
		this->V = v;
		// Declaring list of array as per vertices
		this->l.resize(V);
	}

	void addEdge(int x,int y)
	{
		// Undirected graph
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void printList()
	{
		for(int i=0;i<V;i++)
		{
			cout<<"Vertices "<<i<<" ->";
			for(auto nbr:l[i])
			{
				cout<<nbr<<" ";
			}
			cout<<endl;
		}
	}
};

int main()
{
	// Declaring class object
	Graph obj(4);

	obj.addEdge(0,1);
	obj.addEdge(0,2);
	obj.addEdge(1,2);
	obj.addEdge(2,3);

	obj.printList();
}