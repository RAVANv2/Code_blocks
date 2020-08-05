#include<bits/stdc++.h>
using namespace std;

class Graph{
	map<int,list<int>> l;
public:
	void addEdge(int x,int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void dfs_helper(int src,map<int,bool> &visited)
	{
		visited[src] = true;
		cout<<src<<" ";
		for(auto nbr:l[src])
		{
			if(!visited[nbr])
			{
				dfs_helper(nbr,visited);
			}
		}
	}

	void dfs()
	{
		map<int,bool> visited;
		int cnt=0;
		for(auto i:l)
		{
			int node = i.first;
			if(!visited[node])
			{
				cout<<"Component "<<cnt<<" --> ";
				dfs_helper(node,visited);
				cout<<endl;
				cnt++;
			}
		}
	}
};

int main()
{
	Graph obj;

	obj.addEdge(0,1);
	obj.addEdge(1,2);
	obj.addEdge(2,3);
	obj.addEdge(3,0);
	obj.addEdge(0,4);

	obj.addEdge(5,6);
	obj.addEdge(6,7);

	obj.addEdge(8,8);

	obj.dfs();
}