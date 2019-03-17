#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void swap(p, int *q)
// {
// 	int *c = *p;
// 	*p = *q;
// 	*q = *c;
// }

void imageRot(vector < vector<int> > &a)
{
	int temp;
	for(int i = 0;i<a.size();i++)
	{
		for(int j;j<i;j++)
			{
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
	}


	for(int i = 0;i<a.size();i++)
	{
		for(int j=0;j<a.size();j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
	}


	for(int i = 0;i<a.size();i++)
	{
		for(int j;j<a.size()/2;j++)
			{
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
	}

	for(int i = 0;i<a.size();i++)
	{
		for(int j=0;j<a.size();j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
	}


}


int main()
{
	int n,temp;
	vector<vector <int> > a;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			v.push_back(temp);
		}

		a.push_back(v);
	}

	imageRot(a);


	return 0;
}