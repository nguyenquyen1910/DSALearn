#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int &x : a) cin>>x;
        sort(a,a+n);
        ll ans=0;
        for(int i=0;i<n;i++){
            ans+=a[i]*i;
            ans%=MOD;
        }
        cout << ans << endl;
    }
    return 0;
}