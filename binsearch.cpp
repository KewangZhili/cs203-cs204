#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int A[],int l,int r,int k);
int main()
{
	int n,i,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<BinarySearch(arr,0,n,k)<<endl;

}
int BinarySearch(int A[],int l,int r,int k)
{
	int mid;
	if(l<=r)
	{
		mid=l+(r-l)/2;
		if(A[mid]==k)
			return mid;//we are returningh the positions here.
		else if(A[mid]>k)
			BinarySearch(A,l,mid-1,k);
		else if(A[mid]<k)
			BinarySearch(A,mid+1,r,k);
	}
	return -1;	//This -1 must be outside the loop !!!
}
