#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int> :: iterator r , vector<int> :: iterator s)
{
  vector<int> :: iterator t;
  *t = *r;
  *r = *s;
  *s = *t;
}

int pivot(vector<int> &v , int left , int right)
{
  int i = left-1;
  int j = left;
  int p = v[right];

  for(;j<right;j++)
  {
    if(v[j] <= p)
    {
      i++;
      swap(v[i],v[j]);
    }
  }

  // swap(v[i+1],v[right]);
  // for(int i= 0; i< v.size();i++)
  //   cout<<v[i]<<" ";
  // cout<<endl;

  return i+1;
}


void quick_sort(vector<int> &v, int left, int right)
{
  int pivot_element;
  if(left < right)
  {
    pivot_element = pivot(v,left,right);
    quick_sort(v,left,pivot_element-1);
    quick_sort(v,pivot_element+1,right);

  }
}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,temp;
    cin>>n;
    vector <int> v;
    v.reserve(n);
    for(int i = 0 ;i<n;i++)
    {
      cin>>temp;
      v.push_back(temp);
    }

    //cout<<pivot(v,0,n-1)<<endl;
    //cout<<"****";

    quick_sort(v,0,n-1);

    for(int i= 0; i<n;i++)
      cout<<v[i]<<" ";
    cout<<endl;



  }

}
