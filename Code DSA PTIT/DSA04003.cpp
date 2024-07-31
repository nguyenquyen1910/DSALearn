#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 123456789;
ll poww(ll n,ll k){
    if(k==0) return 1;
    ll res=poww(n,k/2);
    if(k%2==1)
        return (((res*res)%MOD)*n)%MOD;
    else return (res*res)%MOD;
}
void testcase(){
    ll n;cin>>n;
    cout << poww(2,n-1);
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