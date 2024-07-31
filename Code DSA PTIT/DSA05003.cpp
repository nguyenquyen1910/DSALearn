#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dp[101][101][101];
void testcase(){
    int n,m,l,res=0;cin>>n>>m>>l;
    string s,t,z;cin>>s>>t>>z;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int k=1;k<=l;k++){
                if(s[i-1]==t[j-1] && s[i-1]==z[k-1]){
                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                }
                else dp[i][j][k]=max({dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]});
            }
        }
    }
    cout << dp[n][m][l];
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