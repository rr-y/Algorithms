#include<iostream>
#include<stack>
using namespace std;


char check(char ch)
{
	switch(ch)
	{
		case '{':
			return '}';
		case '[':
			return ']';
		case '(':
			return ')';
		default:
			return 'a';


	}
}


void fun(stack <char> &s, string &str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i] == '(' || str[i] == '{' || str[i] == '[')
			s.push(str[i]);
		else if(str[i] == ')'|| str[i] == '}' || str[i] == ']')
		{
			if(s.empty() || check(s.top()) != str[i])
			{
				cout<<"No"<<endl;
				return;
			}
			else
				s.pop();

		}
	}
	cout<<"Yes"<<endl;
	return;

}


int main()
{
	string str;
	stack <char> s;
	cin>>str;
	fun(s,str);
	return 0;
}