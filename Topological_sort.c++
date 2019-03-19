#include<iostream>
#include<map>
#include<list>
using namespace std;

template<typename T>

class Graph 
	
	{
		map<T, list<T> > graph;

		public:

			void addEdge(T u, T v)
			{
				graph[u].push_back(v);
			}


			void topological_helper(T start , map<T,bool> & visited, list<T> & order)
			{
				visited[start] = true;
				for(T neighbour : graph[start])
				{
					if(!visited[neighbour])
						topological_helper(neighbour,visited,order);
				}

				order.push_front(start);
			}

			void topological(T start)
			{
				map<T,bool> visited;
				list<T> order;

				
				topological_helper(start,visited,order);

				for(auto i : graph)
				{
					if(!visited[i.first])
						topological_helper(i.first,visited,order);
				}


				for(T element : order)
					cout<<element<<" ";
				cout<<endl;


			}


};


int main()
{

	Graph <int> g;
	g.addEdge(1,3);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(3,5);
	g.addEdge(4,6);
	g.addEdge(5,6);

	g.topological(1);


}









