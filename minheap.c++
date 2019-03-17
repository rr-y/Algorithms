#include<iostream>
#include<vector>
using namespace std;

typedef vector<int> V;


void swap( vector<int> ::iterator a, vector <int> :: iterator b)
{
	vector<int> ::iterator temp;
	*temp = *a;
	*a = *b;
	*b = *temp;
}

void heapify( vector<int> &v, int pos)
{
	int size = v.size() - 1;
	int left = 2*pos + 1;
	int right = 2*pos + 2;
	 int smallest = pos;

	if(left <= size && v[left] < v[smallest])
		smallest = left;


	if(right <= size && v[right] < v[smallest])
		smallest = right;

	if(smallest != pos)
	{
		swap(v[pos],v[smallest]);
		heapify(v,smallest);
	}

}

void insert(vector <int> &v,int val)
{
	v.push_back(val);
	int pos = v.size()-1;

	int parent = (pos-1)/2;

	while(parent >=0 && v[parent] > v[pos])
	{
		swap(v[pos],v[parent]);
		pos = parent;
		parent =  (pos-1)/2;
	}

}




int main()
{
	cout<<"Please enter the no of elements in the heap \n";
	int n,temp;
	cin>>n;

	V v;
	v.reserve(n);
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}

	for(int i=v.size()/2;i>=0;i--)
			heapify(v,i);

	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;


	insert(v,0);


	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
}