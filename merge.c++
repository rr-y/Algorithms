#include<iostream>
using namespace std;

// merge procedure of two sorted array 
void merge(int *a, int *b,int m , int n)
{
	int c[5];
	for(int i = 0;i<m;i++)
		c[i] = a[i];

	int j=0,k=0;

	for(int i=0;i<m+n;i++)
	{
		if(c[j] <= b[k] && j<m)
		{
			a[i] = c[j];
			j++;

		}

		else if(c[j] >= b[k] && k<n)
		{
			a[i] = b[k];
			k++;
		}

		else
		{
			if (j>=m)
			{
				for(i=k;i<m+n;i++)
					a[i] = b[k];


			}

			else{
				for(i=j;i<m+n;i++)
					a[i] = c[j];

			}

			break;

		}
		
	}
}

int main()
{
	int a[10] = {11,22,33,44,55};
	int b[] = {14,28,42,56,70};

	merge(a,b,5,5);

	

	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";

	return 0;

}

