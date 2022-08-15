#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,l=0,left,right,sum=0,max=INT_MIN;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		/*This part is essential to place the rt. pointer properly*/
		if(sum>max)
		{
			max=sum;
			left=l;
			right=i;
		}
		else if(sum<0)
		/*This part is necessary to place the left pointer*/
		{
			sum=0;
			left=i+1;
		}
		
	}
	cout<<left+1<<" "<<right+1<<" "<<max;

}