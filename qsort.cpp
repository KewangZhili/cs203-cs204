#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int Partition(vi &v,int l,int r){
    //My inputs are all distinct umbers
    int left=-1; int right=0;
    for(int i=l;i<=r-1;i++){
        if(v[i]<v[r])  {
            swap(v[left+1],v[i]);
            left++;
        }
       else if(v[i]>v[r]){
            right++;
       }
    }
    swap(v[left+1],v[r]);
    return left+1;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void qsort(vi &v,int l,int r){
    if(l<r){
    int p=Partition(v,l,r);
    qsort(v,l,p-1);
    qsort(v,p+1,r);
    }
    
}
int main()
{
     int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    qsort(v,0,n-1);
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";

}