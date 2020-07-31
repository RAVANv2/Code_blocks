#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
private:
	unordered_map<T,list<T> > l;
public:
	void addEdge(T x,T y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void bfs(int src)
	{
		queue<T> q;
		map<T,int> dist;

		for(auto i:l)
		{
			T node = i.first;
			dist[node] = INT_MAX;
		}

		dist[src] = 0;
		q.push(src);

		while(!q.empty())
		{
			T node = q.front();
			q.pop();

			for(auto i:l[node])
			{
				if(dist[i]==INT_MAX)
				{
					q.push(i);
					dist[i] = dist[node] + 1; 
				}
			}
		}

		for(auto node_pair:l)
		{
			T node = node_pair.first;
			int d = dist[node];

			cout<<"Node "<<node<<" Dist from src "<<d<<endl;

		}
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