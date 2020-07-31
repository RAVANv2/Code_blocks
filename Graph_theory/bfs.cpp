#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
	vector<bool> visited;
	map<T,vector<T> > l;
public:
	void addEdge(T x,T y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void bfs(T src)
	{
		queue<T> q;
		map<T,bool> visited;

		q.push(src);
		visited[src] = true;

		while(!q.empty())
		{
			T node = q.front();
			q.pop();
			cout<<node<<" ";

			for(auto nbr:l[node])
			{
				if(!visited[nbr])
				{
					q.push(nbr);
					visited[nbr] = true;
				}
			}
		}

		cout<<endl;

		for(int i=0;i<visited.size();i++)
			cout<<visited[i]<<" ";
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

	obj.bfs(0);

}