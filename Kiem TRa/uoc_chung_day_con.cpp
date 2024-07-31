#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int solve(ll *a,int n,int k){
    int res=INT_MAX;
    for(int i=0;i<n;i++){
        ll cur=a[i];
        if(cur==k) return 1;
        for(int j=i+1;j<n;j++){
            cur=gcd(cur,a[j]);
            if(cur==k){
                res=min(res,j-i+1);
                break;
            }
        }
    }
    if(res==INT_MAX) return -1;
    return res;
}
void testcase(){
    int n,k;cin>>n>>k;
    ll a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout << solve(a,n,k);
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