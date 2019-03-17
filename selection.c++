
#include<iostream>
using namespace std;

void swap(int * p, int * q)
{
	int* temp = p;
	p = q;
	q = temp;
}

void selection(int* a, int n)
{
	int minpos;
	for(int i=0;i < n; i++)
	{
		minpos = i;
		for(int j= i;j<n;j++)
		{
			if(a[minpos]>a[j])
				minpos = j;

		}

		if(minpos != i)
			swap(a[i],a[minpos]);
	}


}

int main()
{
	int a[] = {2,6,4,3,3,3,7,3};
	selection(a,8);

	for(int i=0;i<8;i++)
		cout<<a[i]<<" ";
	cout<<endl;


	return 0;	
}






