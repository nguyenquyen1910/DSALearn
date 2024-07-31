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
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
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