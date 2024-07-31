#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    pair<int,int> a[n+1];
    int dp[n+1],res=0;
    for(int i=0;i<n;i++){
        dp[i]=1;
        cin>>a[i].first>>a[i].second;
        for(int j=0;j<i;j++){
            if(a[i].first>a[j].first && a[i].second>a[j].second){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        res=max(res,dp[i]);
    }
    cout << res;
    return 0;
}