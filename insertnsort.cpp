#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector< vector<int> >
#define vb vector<bool>
typedef long long int ll;
#define vp vector< pair<int,int> >
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
vi InsertionSort(vi &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int j=i+1;
        for(int k=j;k>=0;k--){
            //We could have simply used the lower_bound stl function to find out the place at which j would finally rest in the intermediate step
            if(v[k]<v[k-1])   swap(v[k-1],v[k]);
        }
    }
    return v;
}
int main()
{  
      int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    InsertionSort(v);
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";


}