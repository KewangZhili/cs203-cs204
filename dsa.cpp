#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,sum=0,max=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		sum=0;
		sum+=arr[i];
		if(max<sum)
			max=sum;
		for(j=i+1;j<n;j++)
		{
			sum+=arr[j];
		if(max<sum)
			max=sum;
		}
	}
	cout<<max;
}