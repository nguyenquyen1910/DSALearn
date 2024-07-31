#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n,q;cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll dp[n+1];
    dp[1]=a[1];
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+a[i];
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        ll max_sum = 0;
        ll current_sum = 0;
        for(int i = l; i <= r; i++) {
            current_sum = max(0LL, current_sum + a[i]);
            max_sum = max(max_sum, current_sum);
        }
        cout << max_sum << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    testCase();
    return 0;
}