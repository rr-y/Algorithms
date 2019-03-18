#include<iostream>
#include<map>
#include<list>
using namespace std;

template<typename T>


class Graph
{
	map< T,list<T> > adjList;

	public:

		void addEdge(T u, T v , bool bidir = true)
		{
			adjList[u].push_back(v);
			if(bidir)
				adjList[v].push_back(u);

		}

		void printGraph()
		{
			for(auto i : adjList)
			{
				cout<<i.first<<" - > ";

				for(auto neighbour : i.second)
					cout<<neighbour<<" ";
				cout<<endl;
			}
		}


		void dfshelper(T start, map <T,bool> & visited)
		{
			cout<<start<<" ";

			for( auto  neighbour : adjList[start])
			{
				if(!visited[neighbour])
				{
					visited[neighbour] = true;
					dfshelper(neighbour,visited);
				}
			}
		}



		void dfs(T start)
		{
			map<T,bool> visited;
			 for(auto i : adjList)
		 		visited[i.first] = false;

			visited[start] = true;
			dfshelper(start,visited);

		}


};


int main()
{
	Graph<string> s;
	s.addEdge("Amritsar","Jaipur");
	s.addEdge("Amritsar","Delhi");
	s.addEdge("Jaipur","Delhi");
	s.addEdge("Jaipur","Mumbai");
	s.addEdge("Delhi","Bhopal");
	s.addEdge("Mumbai","Bhopal");
	s.addEdge("Mumbai","Banglore");
	s.addEdge("Delhi","Agra");
	s.addEdge("Andaman","Nikobar");
	s.printGraph();

	s.dfs("Amritsar");
	return 0;



}


