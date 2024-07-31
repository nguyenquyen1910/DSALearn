#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dp[1005][1005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;cin>>n>>m;
    int a[n+5][m+5];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    dp[1][1]=a[1][1];
    for(int i=2;i<=n;i++){
        dp[i][1]=a[i][1]+dp[i-1][1];
    }
    for(int j=2;j<=m;j++){
        dp[1][j]=a[1][j]+dp[1][j-1];
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            dp[i][j]=a[i][j]+max({dp[i-1][j],dp[i][j-1]});
        }
    }
    cout << dp[n][m];
    return 0;
}