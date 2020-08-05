#include<bits/stdc++.h>
using namespace std;

class Graph{
	map<int, list<int>> l;
public:
	void addEdge(int x,int y)
	{
		l[x].push_back(y);
	}

	int bfs(int src,int dest)
	{
		queue<int> q;
		map<int,int> dist;
		// For backtracking
		map<int,int> parant;

		for(auto i:l)
		{
			int node = i.first;
			dist[node] = INT_MAX;
		}

		q.push(src);
		dist[src] = 0;
		parant[src] = src;	

		while(!q.empty())
		{
			int node = q.front();
			q.pop();

			for(auto nbr:l[node])
			{
				if(dist[nbr]==INT_MAX)
				{
					q.push(nbr);
					dist[nbr] = dist[node]+1;
					parant[nbr] = node;
				}
			}
		}


		// Dice required to catch that vertex 
		cout<<"Count of Dice required to catch the node "<<endl;
		for(auto node_pair:l){
			int node = node_pair.first;
			int d = dist[node];
			cout<<node<<" dist is "<<d<<endl;
		}


		// Printing the shortest path for minimum number of dice.
		cout<<endl;
		cout<<"Shortest Path "<<endl;
		int temp = dest;
		while(temp!=src)
		{
			cout<<temp<<"<--";
			temp = parant[temp];
		}
		cout<<src<<endl;

		// Returning the number of dice should thrown to reach destination
		return dist[dest];

	}

	void printList()
	{
		for(auto i:l)
		{
			int node = i.first;
			cout<<node<<" -> ";
			for(auto nbr:l[node])
			{
				cout<<nbr<<" ";
			}
			cout<<endl;
		}
	}
};

int main()
{
	// Input board;
	int board[50] = {0};

	// Snakes(-ve) // Ladders(+ve)

	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = 10;
	board[32] = -2;
	board[34] = -22;

	// Adding Edges

	Graph g;
	for(int i=0;i<=36;i++)
	{
		for(int device=1;device<=6;device++)
		{
			int j = i + device;
			j += board[j];

			if(j<=36)
				g.addEdge(i,j);
		}
	}
	g.addEdge(36,36);

	int ans = g.bfs(0,36);

	cout<<endl;
	cout<<"Minimum number of dice required to reach out destinantion is "<<ans<<endl;
}