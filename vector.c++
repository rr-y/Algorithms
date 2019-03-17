

// Vector -- dynamic array in C++


#include<iostream>
#include<vector>
#include<algorithm>
#include<typeinfo>

using namespace std;

int main()
{
	vector <int> v;
	v.reserve(5);
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}

	// show all the elements

	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;

	// In built sorting function
	sort(v.begin(),v.end());

	cout<<"after sorting\n";

	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;


	// Some useful vector methods.
	cout<<v.max_size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<"size "<<v.size()<<endl;

	v.push_back(10);
	cout<<v.capacity()<<endl;
	cout<<"size "<<v.size()<<endl;


	// Type of a variable
	cout<<typeid(v.begin()).name()<<endl;
	
	

	return 0;
}