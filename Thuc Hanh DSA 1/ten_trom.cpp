#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,M;cin>>n>>M;
    int w[5001],c[5001];
    for(int i=1;i<=n;i++){
        cin>>w[i]>>c[i];
    }
    int dp[n+5][M+5];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=M;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=w[i]){
                dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+c[i]);
            }
        }
    }
    cout << dp[n][M];
    return 0;
}