#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    ll dp[n+1];
    for(int i=0;i<=n;i++) dp[i]=i;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=sqrt(i);j++){
            dp[i]=min(dp[i],dp[i-j*j]+1);
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