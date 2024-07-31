#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    string s;cin>>s;
    int n=s.size();
    int dp[n][n];
    for(int i=0;i<n;i++) dp[i][i]=1;
    for(int k=2;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(s[i]==s[j] && k==2){
                dp[i][j]=2;
            }
            else if(s[i]==s[j]){
                dp[i][j]=dp[i+1][j-1]+2;
            }
            else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
        }
    }
    cout << n-dp[0][n-1];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}