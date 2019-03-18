#include<iostream>
#include<map>
#include<queue>
#include<list>
using namespace std;

template<typename T>


class Graph
{
	map<T,list<T> > adjList;

	public:

	 	void addEdge( T u, T v, bool bider = true)
	 	{
	 		adjList[u].push_back(v);

	 		if(bider)
	 			adjList[v].push_back(u);


	 	}

	 	void printGraph()
	 	{
	 		for(auto i : adjList)
	 		{
	 			cout<<i.first<<" -> ";

	 			for(T entry : i.second)
	 				cout<<entry<<" ";
	 			cout<<endl;
	 		}
	 	}


};


int main()
{

	Graph <int> g;
	g.addEdge(1,2,false);
	g.addEdge(2,3,false);
	g.addEdge(3,4,false);
	g.addEdge(4,1,false);
	g.printGraph();
	return 0;
}