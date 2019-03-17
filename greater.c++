// String sorting using builtin function

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <string> v;
		string s;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			v.push_back(s);
		}

		sort(v.begin(),v.end(),greater<string>());

		for(int i=0;i<n;i++)
		{
			cout<<v[i];
		}
		cout<<endl;

		v.clear();
	}

	return 0;

}