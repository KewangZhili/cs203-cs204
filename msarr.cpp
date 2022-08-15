#include<bits/stdc++.h>
using namespace std;
/*divide and conquer*/
int MaxCross(int A[],int l,int r);
int MaxSuba(int A[],int l,int r);
int max(int a,int b,int c);
int main()
{
	int n,i,j,sum=0,max=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<MaxSuba(arr,0,n-1);
	

}
int MaxSuba(int A[],int l,int r)
{
	int mid=l+(r-l)/2;
	if(l<r)
	{
		MaxSuba(A,l,mid-1);
		MaxSuba(A,mid+1,r);
		MaxCross(A,l,r);
		return max(MaxSuba(A,l,mid-1),MaxSuba(A,mid+1,r),MaxCross(A,l,r));
	}
	return -1;
}
int MaxCross(int A[],int l,int r)
{
	int i;
	int mid=l+(r-l)/2;
	int sum=A[mid],lsum=A[mid],rsum=A[mid];
	if(l<r){
	int i;
	for(i=mid-1;i>=0;i--)
	{
		sum+=A[i];
		if(sum>lsum)
			lsum=sum;
	}
	sum=A[mid];
	for(i=mid+1;i<r;i++)
	{
		sum+=A[i];
		if(sum>rsum)
			rsum=sum;
	}
	if(lsum>0 && rsum>0)
		return max(lsum,rsum,lsum+rsum-A[mid]);
	else if (lsum>0 && rsum<=0)
		return lsum;
	else if(lsum<=0 && rsum>0)
		return rsum;
	}
	else 
		return -1;
		
}
int max(int a,int b,int c)
{
	int max=INT_MIN;
	if(a>max)
		max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	return max;

		
}