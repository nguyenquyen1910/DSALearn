//Cho 1 ma tran nhiem vu cua ban la tim so hinh vuong toan so 1
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;cin>>n>>m;
    int a[n+1][m+1],dp[n+1][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) dp[i][0]=a[i][0];
    for(int i=0;i<m;i++) dp[0][i]=a[0][i];
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]){
                if(dp[i-1][j]>0 && dp[i-1][j-1]>0 && dp[i][j-1]>0){
                    dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
                }
                else dp[i][j]=1;
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans+=dp[i][j];
        }
    }
    cout << ans;
    return 0;
}