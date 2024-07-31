#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n],dp[n+5]={0};
    for(int i=1;i<=n;i++) cin>>a[i];
    int res=0;
    for(int i=1;i<=n;i++){
        dp[a[i]]=dp[a[i]-1]+1;
        res=max(res,dp[a[i]]);
    }
    cout << n-res;
    return 0;
}