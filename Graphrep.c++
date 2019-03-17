#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

class Graph
{
	private:
		int v;
		list <int> *l;
	public:
		Graph(int v1)
		{
			v = v1;
			l = new list<int> [v];
		}


		void addEdge(int p,	int q, bool bidirect = true)
		{
			l[p].push_back(q);

			if(bidirect)
			{
				l[q].push_back(p);
			}

		}


		void printGraph()
		{
			for(int i=0;i<v;i++)
			{
				cout<<i<<" -> ";
				for(int vertex : l[i])
				{
					cout<<vertex<<" ";
				}

				cout<<endl;
			}
		}


};


class Graph1
{
	private:
		int v;
		vector <int> *l;
	public:
		Graph1(int v1)
		{
			v = v1;
			l = new vector<int> [v];
		}


		void addEdge(int p,	int q, bool bidirect = true)
		{
			l[p].push_back(q);

			if(bidirect)
			{
				l[q].push_back(p);
			}

		}


		void printGraph()
		{
			for(int i=0;i<v;i++)
			{
				cout<<i<<" -> ";
				for(int vertex : l[i])
				{
					cout<<vertex<<" ";
				}

				cout<<endl;
			}
		}

};

int main()
{

	cout<<" using array of list\n \n";

	Graph g(3);
	g.addEdge(0,1);
	g.addEdge(0,2);
	//g.addEdge(1,0);
	g.addEdge(1,2);
	//g.addEdge(2,0);
	//g.addEdge(2,1);

	g.printGraph();


 	cout<<"using vector \n\n";
	Graph1 g1(3);
	g1.addEdge(0,1);
	g1.addEdge(0,2);
	//g.addEdge(1,0);
	g1.addEdge(1,2);
	//g.addEdge(2,0);
	//g.addEdge(2,1);

	g1.printGraph();
	return 0;


}




