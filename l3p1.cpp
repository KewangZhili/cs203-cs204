#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
typedef long long int ll;
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int mod(int x){
	if(x>0)	return x;
	else return -x;
}
int nearestele(vi input,int i){
	//Here i is the inde of the element whose nearest element is required
	vi auxillary(input.size()-i-1);
	for(int j=0;j<auxillary.size();j++){
		auxillary[j]=mod(input[j+i+1]-input[i]);
	}//j has to be  translated by i+1 units
	int min=INT_MAX;
	int ans,j;
	for(j=0;j<auxillary.size();j++){
		if(min>auxillary[j]){
			min=auxillary[j];
			ans=j;
		}
	}
	return j+i;
	
}
int main(){
	int n;
	cin>>n;
	vi input(n);
	for(int i=0;i<n;i++)	cin>>input[i];
	int i;//Alaways declare this outside of the loops,u saw what happened in the nearestele fn right
	for( i=n-2;i>=0;i--){
		//Finding which element violates the descending order
		if(input[i]<input[i+1]){
			int nearest=nearestele(input,i);
			//Upper Bound will give the next larger integer larger than the given int
			//Whereas the lower bound will give the int smaller than the input integer
			swap(input[i],input[nearest]);
			//Now we have to reverse the input vec from i+1->n-1 th indices
			reverse(input.begin()+i+1,input.end());
			break;
		}	
	}
	if(i==-1)	cout<<-1<<endl;
	else
	for(int i=0;i<n;i++)	cout<<input[i]<<endl;
}