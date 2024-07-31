#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        ll dp[n+5];
        for(int i=0;i<=n;i++) dp[i]=i;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=sqrt(i);j++){
                dp[i]=min(dp[i],dp[i-j*j]+1);
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}