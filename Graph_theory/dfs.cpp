#include<bits/stdc++.h>
using amespace std;

template<typename T>
class Graph{
	map<T,list<T>> l;
public:
	void addEdge(T x,T y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void dfs_helper(T src,map<T,bool> &visited)
	{
		cout<<src<<" ";
		visited[src] = true;
		for(auto nbr:l[src])
		{
			if(!visited[nbr]){
				visited[nbr] = true;
				dfs_helper(nbr,visited);
			}
		}
	}

	void dfs(int src)
	{
		map<T,bool> visited;
		dfs_helper(src,visited);
	}
};


int main()
{
	Graph<int> obj;

	obj.addEdge(0,1);
	obj.addEdge(1,2);
	obj.addEdge(2,3);
	obj.addEdge(3,0);
	obj.addEdge(3,4);
	obj.addEdge(4,5);

	obj.dfs(0);
}