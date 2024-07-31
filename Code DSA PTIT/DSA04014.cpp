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
            a[l++]=R[j];
            ans+=L.size()-i;
            ++j;
        }
    }
    while(i<L.size()) a[l++]=L[i++];
    while(j<R.size()) a[l++]=R[j++];
    return ans;
}
ll mergeSort(int *a,int l,int r){
    if(l<r){
        int m=(l+r)/2;
        ll tmp1=mergeSort(a,l,m);
        ll tmp2=mergeSort(a,m+1,r);
        return tmp1+tmp2+merge(a,l,m,r);
    }
    return 0;
}
void testcase(){
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    cout << mergeSort(a,0,n-1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}