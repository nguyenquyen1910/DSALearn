#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    int a[n+1];
    vector<int> dp(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i]=a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                dp[i]=max(dp[i],dp[j]+a[i]);
            }
        }
    }
    cout << *max_element(dp.begin(),dp.end());
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