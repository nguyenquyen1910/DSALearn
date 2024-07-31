#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dp[1005][1005];
void testcase(){
    memset(dp,0,sizeof(dp));
    string s;cin>>s;
    int n=s.size();
    s=" "+s;
    for(int i=1;i<=n;i++){
        dp[i][i]=1;
    }
    int ans=1;
    for(int len=2;len<=n;len++){
        for(int i=1;i<=n-len+1;i++){
            int j=i+len-1;
            if(len==2) dp[i][j]=(s[i]==s[j]);
            else dp[i][j]=((s[i]==s[j]) && dp[i+1][j-1]);
            if(dp[i][j]) ans=max(ans,len);
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