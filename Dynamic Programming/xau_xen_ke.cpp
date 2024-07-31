//Cho 3 xau s1 s2 s3 . check xem co the ghep 2 xau s1 s2 thanh xau s3 duoc khong
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s1,s2,s3;cin>>s1>>s2>>s3;
    int n=s1.size(),m=s2.size(),l=s3.size();
    int dp[101];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=m;i++){
        dp[i]=dp[i-1] && s2[i-1]==s3[i-1];
    }
    for(int i=1;i<=n;i++){
        dp[0]=dp[0] && s1[i-1]==s3[i-1];
        for(int j=1;j<=m;j++){
            dp[j]=(dp[j] && s1[i-1]==s3[i+j-1]) || (dp[j-1] && s2[j-1]==s3[i+j-1]);
        }
    }
    cout << dp[n];
    return 0;
}