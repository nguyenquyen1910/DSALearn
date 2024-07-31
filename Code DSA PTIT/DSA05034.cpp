#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
void testcase(){
    int n,k;cin>>n>>k;
    int dp[n+5]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=min(i,k);j++){
            dp[i]+=dp[i-j];
            dp[i]%=MOD;
        }
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