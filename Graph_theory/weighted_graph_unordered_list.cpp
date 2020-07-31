#include<bits/stdc++.h>
using namespace std;

class Graph{
	int v;
	unordered_map<string, vector<pair<string,int> > > l;

public:
	Graph(int vertics)
	{
		this->v = vertics;
	}

	void addEdge(string x,string y,bool isbidi,int wt)
	{
		l[x].push_back(make_pair(y,wt));
		if(isbidi)
		{
			l[y].push_back(make_pair(x,wt));
		}
	}

	void printList()
	{
		for(auto p:l)
		{
			string source = p.first;
			vector<pair<string,int> > nbrs = p.second;
			cout<<"Vertics "<<source<<" -> ";
			for(auto nbr:nbrs)
			{
				cout<<nbr.first<<" Weight "<<nbr.second<<" ";
			}
			cout<<endl;
		}
		
	}

};



int main()
{
	Graph obj(4);

	obj.addEdge("A","B",true,20);
	obj.addEdge("B","D",true,30);
	obj.addEdge("D","C",true,40);
	obj.addEdge("C","A",true,10);
	obj.addEdge("A","D",false,20);

	obj.printList();
}