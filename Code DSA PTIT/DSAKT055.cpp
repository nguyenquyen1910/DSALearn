#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n,V;cin>>n>>V;
    int a[n+1],c[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>c[i];
    ll dp[n+1][V+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=V;j++){
            if(j>=a[i]){
                dp[i][j]=max(dp[i-1][j-a[i]]+c[i],dp[i-1][j]);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout << dp[n][V];
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