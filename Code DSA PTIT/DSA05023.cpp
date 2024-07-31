#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    string s;cin>>s;
    int n=s.size();
    ll dp[n+1];
    dp[0]=s[0]-'0';
    for(int i=1;i<n;i++){
        dp[i]=dp[i-1]*10+(s[i]-'0')*(i+1);
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=dp[i];
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