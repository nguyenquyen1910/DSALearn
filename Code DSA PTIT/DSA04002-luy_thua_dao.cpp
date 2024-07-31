#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
ll binpow(ll a,ll b){
    if(b==0) return 1;
    ll res=binpow(a,b/2);
    ll tmp=(res*res)%MOD;
    if(b%2==1)
        return (a*tmp)%MOD;
    else return tmp;
}
ll rev(ll n) {
    ll res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ll a;cin>>a;
        ll b=rev(a);
        cout << binpow(a,b) << endl;
    }
    return 0;
}