#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void Heapify(vi &v,int i){
    //Heapifies only when all inputs are different
    int l=2*i+1,largest,r=2*i+2;
    //If i initialise largest to be i here then suppose i<l<r then in the 2nd branch we get largest =i instead of l
    if(i<v.size() && r<v.size()){
   // if(v[i]>v[l] && v[i]>v[r])  return;
    

        if(v[i]<v[l]){  largest=l;
        }
        else largest =i;
       // swap(v[i],v[largest]);
       //Dont swap here fisrt find out the largest index in a iteration and do the swapping at the end
        if(v[r]>v[largest]){
            largest=r;
        }
        if(largest!=i)  {
            swap(v[i],v[largest]);
            Heapify(v,largest);

    }
}
}
void BuildHeap(vi &v){
    //The leaves are the initially heapified nodes(from n/2 to n in a 1-n array)
    int n=v.size();
    for(int i=n/2-1;i>=0;i--)
        Heapify(v,i);
}
/*vi HeapSort(vi &v)
{
    int n=v.size();
    vi ans(n,0);
    BuildHeap(v);
    for(int i=0;i<v.size();i++){
        swap(v[i],v[v.size()-i]);
        ans[n-i]=v[n-i];
        v.pop_back();
        Heapify(v,)
    }
}*/
int main()
{
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    BuildHeap(v);
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";

}