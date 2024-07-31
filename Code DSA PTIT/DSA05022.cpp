#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n,in,de,cp;cin>>n>>in>>de>>cp;
    int dp[n+5]={0};
    dp[1]=in;
    for(int i=2;i<=n;i++){
        if(i%2==1){
            dp[i]=min(dp[i-1]+in,dp[(i+1)/2]+cp+de);
        }
        else{
            dp[i]=min(dp[i-1]+in,dp[i/2]+cp);
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