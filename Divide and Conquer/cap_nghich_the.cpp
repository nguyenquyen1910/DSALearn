#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll merge(int *a,int l,int m,int r){
    vector<int> L(a+l,a+m+1);
    vector<int> R(a+m+1,a+r+1);
    ll ans=0;
    int i=0,j=0;
    while(i<L.size() && j<R.size()){
        if(L[i]<=R[j]){
            a[l++]=L[i++];
        }
        else{
            a[l++]=R[j++];
            ans+=L.size()-i;
        }
    }
    while(i<L.size()) a[l++]=L[i++];
    while(j<R.size()) a[l++]=R[j++];
    return ans;
}
ll mergecount(int *a,int l,int r){
    if(l<r){
        int m=(l+r)/2;
        return mergecount(a,l,m)+mergecount(a,m+1,r)+merge(a,l,m,r);
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int &i : a) cin>>i;
    cout << mergecount(a,0,n-1);
    return 0;
}