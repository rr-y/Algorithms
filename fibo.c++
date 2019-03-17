#include<iostream>
using namespace std;

int fibo(int n)
{
	if(n==0 || n ==1)
		return 0;
	if(n == 2)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);

}





void itfibo(int n)
{
		int temp;
		int a = 0;
		int b = 1;	
		for(int i = 1;i<=n;i++)
		{
			cout<<a<<" ";
			temp = a;
			a=b;
			b = temp+b;
			
		}

		cout<<"\n";
}

int main() 
{
	int n;
	cin>>n;
	itfibo(n);
	return 0;
}