// array element sum


#include<iostream>
using namespace std;
#include<array>

 int sum1(int* arr)
 {
 	int sum = 0;
 	for(int i=0;i<=7;i++)
 		sum+=arr[i];

 	return sum;
 }

 int main()
 {
 	int arr[] = {1,2,3,4,5,6,7};
 	int sum = sum1(arr);
 	cout<<sum<<endl;
 }