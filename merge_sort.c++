#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &v, int left, int mid, int right)
{
	vector<int> v1,v2;

	for(int i =left;i<=right;i++)
	{
		if(i <= mid)
			v1.push_back(v[i]);
		else
			v2.push_back(v[i]);
	}

	cout<<v1.size()<<" "<<v2.size()<<endl;

	int j = 0, k = 0;

	while( j < v1.size() && k < v2.size())
	{

	
		if( j < v1.size() && (v1[j] >= v2[k]) )
			v[left++] = v2[k++];
	

		else if( k < v2.size() && (v2[k] > v1[j]) )
			v[left++] = v1[j++];

		

		else if(j >= v1.size() || k >= v2.size())
			break;

	}
	
	
		while(j < v1.size())
			v[left++] = v1[j++];
	

		
		while( k < v2.size())
			v[left++] = v2[k++];

	
	v1.clear();
	v2.clear();

}


void mergesort(vector<int> &v, int left, int right)
{
	int mid;
	if(left < right)
	{
		mid = (left + right)/2;
		mergesort(v,left,mid);
		mergesort(v,mid+1,right);
		merge(v,left,mid,right);
	}
}


int main()
{
	int n,temp;
	cin>>n;
	vector <int> v;
	v.reserve(n);

	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}

	mergesort(v,0,n-1);

	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<endl;

	return 0;

}