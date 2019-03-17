#include<iostream>
using namespace std;

int bsearch(int a[], int left, int right, int k)
{
	 int mid = (left + right)/2;
	 if(left == right)
	 {
	 	cout<<"Element is not there\n";
	 	return 0;

	 }
	 
	 else if(k == a[mid])
	 {
	 	cout<<"Element is there \n";
	 	return 0;

	 }
	 
	 else if(k > a[mid])
	 	
	 	return bsearch(a,mid+1,right,k);	 
	 
	 else
	 {
	 	return bsearch(a,left,mid-1,k);
	 }



}

int main()
{
	int a[] = {11,55,65,76,87,98,99,120};
	bsearch(a,0,7,199);

	return 0;

}





