#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    pair<float,float> a[n];
    int dp[n+1],ans=0;
    for(int i=0;i<n;i++){
        dp[i]=1;
        cin>>a[i].first>>a[i].second;
        for(int j=0;j<i;j++){
            if(a[i].first>a[j].first && a[i].second<a[j].second && dp[i]<=dp[j]){
                dp[i]=dp[j]+1;
            }
        }
        ans=max(ans,dp[i]);
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