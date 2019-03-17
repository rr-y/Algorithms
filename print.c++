#include<iostream>
#include<vector>
using namespace std;

void printcol(vector < vector<int> > &a,int m,int n)
{
  for(int i = 0 ;i<n;i++)
  {
    for(int j = 0; j<m;j++)
    cout<<a[j][i]<<",";
  }
  
}

int main() {
	int m , n,temp;
	cin>>m>>n;
	vector <  vector<int> > a;
	
	for(int i = 0;i<m;i++)
	{
	  vector<int > row;
	  
	  for(int j=0;j<n;j++)
	  {
	    cin>>temp;
	    row.push_back(temp);
	  }
	  a.push_back(row);
	  row.clear();
	}
	
	printcol(a,m,n);

	return 0;
}