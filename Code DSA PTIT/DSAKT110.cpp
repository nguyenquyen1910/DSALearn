#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    ll a[n+5],dp[n+5]={};
    dp[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dp[1]=a[1];dp[2]=a[2];
    for(int i=2;i<=n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+a[i]);
    }
    cout << dp[n];
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