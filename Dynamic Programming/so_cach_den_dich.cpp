//Tinh tong so cach den o (n,m) tu o (0,0)
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;cin>>n>>m;
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                dp[i][j]=1;
                continue;
            }
            if(i-1>=0) dp[i][j]+=dp[i-1][j];
            if(j-1>=0) dp[i][j]+=dp[i][j-1];
        }
    }
    cout << dp[n-1][m-1];
    return 0;
}