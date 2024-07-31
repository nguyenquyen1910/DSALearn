#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;cin>>n>>k;
    int dp[n+1]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=min(i,k);j++){
            dp[i]+=dp[i-j];
            dp[i]%=MOD;
        }
    }
    cout << dp[n];
    return 0;
}