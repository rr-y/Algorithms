#include<iostream>
#include<vector>
using namespace std;

int kadane(vector <int> &a,int n)
{

	int max_sum=0,curr_sum = 0;

	for(int i=0; i<n; i++)
	{
		curr_sum += a[i];
		if(curr_sum < 0)
			curr_sum = 0;
				
		if(curr_sum > max_sum)
			max_sum = curr_sum;			
	}


	return max_sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector <int> a;
		a.reserve(1000001);
		int n,temp;
		cin>>n;
		for(int i = 0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);

		}

		cout<<kadane(a,n)<<endl;
		a.clear();
	}


	return 0;
}