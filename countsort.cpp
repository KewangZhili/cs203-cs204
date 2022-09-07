#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int max(vi &v){
    int x=0;
    for(int i=0;i<v.size();i++) if(x<v[i])  x=v[i];
    return x+1;
}
vi countsort(vi &a,int range){
    int n=a.size();
    int k=range;
    vi b(n),c(k,0);
    for(int i=0;i<n;i++){
        c[a[i]]++;
        //As count array only stores the frequencies so populating the c array doesnt depend whether the arr runs from 0-n-1 or 1-n
    }
    for(int i=1;i<k;i++)   c[i]+=c[i-1];
    for(int i=0;i<n;i++){
        b[c[a[i]]-1]=a[i];
        c[a[i]]--;
    }
    return b;
}
int main()
{
     int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    v=countsort(v,max(v));
    for(int i=0;i<n;i++)    cout<<v[i]<<" ";

}