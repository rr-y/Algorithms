#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack <int> s;
	for(int i = 0;i<10;i++)
		s.push(i*i*i);

	cout<<s.size()<<endl;
	for(int i = 0;i<10;i++)
	{
		s.pop();
		cout<<s.top()<<endl;

	}

	//cout<<s.empty()<<endl;
	return 0;

}