#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100][100],dp[105][105];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==0){
                dp[i][j]=0;
            }
            else{
                dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
            }
            ans=max(ans,dp[i][j]);
        }
    }
    cout << ans;
    return 0;
}