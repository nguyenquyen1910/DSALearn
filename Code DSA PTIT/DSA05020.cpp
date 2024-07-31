#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[505][505],dp[505][505];
void testcase(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        dp[i][1]=dp[i-1][1]+a[i][1];
    }
    for(int i=1;i<=m;i++){
        dp[1][i]=dp[1][i-1]+a[1][i];
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+a[i][j];
        }
    }
    cout << dp[n][m];
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