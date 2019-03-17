
// Problem statement of chikabu hackerblock

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[50];
		cin>>a;
		int i=0,digit;

		if(a[i] == '9')
			i++;

		for(;a[i]!='\0';i++)
		{
			digit = a[i] - '0';
			if(digit >= 5)
				digit = 9-digit;
			a[i] = digit + '0';
		}

		cout<<a<<endl;


	}
}