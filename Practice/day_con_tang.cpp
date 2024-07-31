#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n+1];
    vector<int> dp(n+1,1);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j])
                dp[i]=max(dp[i],dp[j]+1);
        }
    }
    cout << *max_element(dp.begin(),dp.end());
    return 0;
}