#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int> :: iterator p , vector<int> :: iterator q)
{
	vector<int> :: iterator r;
	*r = *p;
	*p = *q;
	*q = *r;
}

void bubble(vector <int> &a , int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}


void selection(vector <int> &a,int n)
{
	int index_min;
	for(int i=0;i<n;i++)
	{
		index_min = i;

		for(int j =i+1;j<n;j++)
		{
			if(a[j]<a[index_min])
				index_min = j;
		}

		swap(a[i],a[index_min]);
	}
}


void insertion_sort(vector<int> &a ,int n)
{
	int temp,j;
	for(int i=1;i<n;i++)
	{
		temp = a[i];
		j = i-1;

		while(temp < a[j] && j >=0)
		{
			a[j+1] = a[j];
			j--;
		}
		a[++j] = temp;


	}
}



int main()
{
	int n,temp;
	cin>>n;

	vector <int> a;
	a.reserve(n);

	for(int i=0;i<n;i++)
	{
		cin>>temp;
		a.push_back(temp);
	}

	//bubble(a,n);

	//selection(a,n);

	insertion_sort(a,n);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;


}