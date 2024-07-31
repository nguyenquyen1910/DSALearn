#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    vector<ll> dp(n+5,0);
    dp[0]=1;dp[1]=1;dp[2]=2;dp[3]=4;
    for(int i=4;i<=n;i++){
        for(int j=1;j<=3;j++){
            dp[i]+=dp[i-j];
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