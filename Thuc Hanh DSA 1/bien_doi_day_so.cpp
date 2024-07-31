#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool equal(int a,int b,int c,int d){
    return abs((double)a/b-(double)c/d)<0.00000001;
}
void testCase(){
    int n,m;cin>>n>>m;
    int a[100001],b[100001];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int dp[n+1][m+1];
    for(int i=0;i<n;i++) dp[i][0]=1;
    for(int i=0;i<m;i++) dp[0][i]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(equal(a[i],b[j],a[i-1],b[j-1])){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else dp[i][j]=1;
        }
    }
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res=max(res,dp[i][j]);
        }
    }
    cout << res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    testCase();
    return 0;
}