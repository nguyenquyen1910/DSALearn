//cho độ dài n của xâu đếm xem các kí tự a e i o u xuất hiện bao nhiêu lần
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int dp[1001][6];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=5;i++) dp[1][i]=i;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=5;j++){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout << dp[n][5];
    return 0;
}