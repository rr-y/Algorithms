#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool mysort(string s1,string s2)
{
	// if(s1.length() > s2.length())
	// 	return s1;
	// else
	// 	return s2;

	return (s1[0] == s2[0]) && (s1.length() > s2.length());
}

int main()
{
	vector<string> str;
	string s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		str.push_back(s);
	}

	sort(str.begin(),str.end(),mysort);

	for(int i=0;i<n;i++)
		cout<<str[i]<<endl;


}

