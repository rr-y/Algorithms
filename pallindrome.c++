#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(vector<int> & v)
{
  int n = v.size();
  for(int i = 0 ; i<v.size()/2;i++)
  {
    if(v[i] != v[n-1-i])
      return false;
  }
  return true;
}

int main() {
	vector<int> v;
	v.reserve(10000);
	int temp,n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	  cin>>temp;
	  v.push_back(temp);
	}
	 bool b = isPalindrome(v);
	 if(b)
	  cout<<"true"<<endl;
	 else
	  cout<<"false"<<endl;
	return 0;
	
}
