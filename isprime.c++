

#include<iostream>
#include<cmath>
using namespace std;

// Prime checking 

 void isPrime(int n)
{
	int flag=1;
	if(n <= 1)
		cout<<"NO\n";
	else
	{
		for(int i=2;i<=sqrt(n);++i)
		{
			if(n%i==0)
			{
				cout<<"NO\n";
				flag=0;
				break;
			}
		}
		if(flag)
			cout<<"YES"<<endl;     
	}
}

int main()
{
	cout<<"Hello\n";
	int n;
	cin>>n;
	isPrime(n);
	return 0;
}
