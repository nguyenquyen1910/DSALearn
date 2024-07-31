#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
ll powmod(ll a,ll b){
    if(b==0) return 1;
    ll res=powmod(a,b/2);
    if(b%2==0) return (res*res)%MOD;
    else return (((res*res)%MOD)*a)%MOD;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll a,b;
    while(cin>>a>>b){
        if(a==0 && b==0) break;
        cout << powmod(a,b) << endl;
    }
    return 0;
}