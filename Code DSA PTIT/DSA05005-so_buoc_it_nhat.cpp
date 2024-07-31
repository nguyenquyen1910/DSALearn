#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    int a[n],dp[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=-1;
    for(int i=0;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(a[j]<=a[i]){
                dp[i]=max(dp[i],dp[j]+1);
            }
            res=max(res,dp[i]);
        }
    }
    cout << n-res;
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