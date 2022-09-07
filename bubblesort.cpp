#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector< vector<int> >
#define vb vector<bool>
vi BubbleSort(vi &v){
    int n=v.size();
    for(int i=0;i<n-1;i++)    for(int j=0;j<n-i;j++)    if(v[j]>v[j+1])   swap(v[i],v[j]);  
    return v;  
}
int main()
{
     int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    BubbleSort(v);
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";

}