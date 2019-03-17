#include<iostream>
using namespace std;


// Printing all sub array 
void allsub(int a[] ,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
				cout<<a[k]<<" ";
			cout<<endl;
		}
	}
}


int main()
{
	int a[4];
	for(int i=0;i<4;i++)
		cin>>a[i];
	allsub(a,4);
	return 0;
}