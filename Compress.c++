#include<iostream>
using namespace std;


// Simple string compression 

string fun(string &s)
{
	string s1 = "";
	int count =1;
	s1 += s[0];

	for(int i=1;i<s.length();i++)
	{
		if(s[i] == s[i-1])
			count++;
		else
		{
			s1 += to_string(count);
			s1+=s[i];
			count = 1;
		}
	}

	s1 += to_string(count);

	return s1;
}


int main()
{

	string s;
	cin>>s;
	cout<<fun(s)<<endl;
	return 0;
}