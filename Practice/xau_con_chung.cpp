#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll dp[1001][1001];
void testcase(){
    string a,b;cin>>a>>b;
    int n=a.size(),m=b.size();
    memset(dp,0,sizeof(dp));
    ll res=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            res=max(res,dp[i][j]);
        }
    }
    cout << res;
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