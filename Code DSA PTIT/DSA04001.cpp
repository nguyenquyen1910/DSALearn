#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
ll binpow(ll a,ll b){
    if(b==0) return 1;
    if(b==1) return a;
    ll res=binpow(a,b/2);
    ll tmp=(res*res)%MOD;
    if(b%2==1)
        return (a*tmp)%MOD;
    else return tmp;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        cout << binpow(a,b) << endl;
    }
    return 0;
}