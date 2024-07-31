#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int binarysearch(int *a,int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x)
            return m;
        else if(a[m]<x){
            l=m+1;
        }
        else r=m-1;
    }
    return -1;
}
void testcase(){
    int n,x;cin>>n>>x;
    int a[n];
    for(int &x : a) cin>>x;
    int pos=binarysearch(a,n,x);
    if(pos==-1) cout << "NO";
    else cout << pos+1;
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