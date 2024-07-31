#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll a,b,c,d;cin>>a>>b>>c>>d;
    ll mau=lcm(b,d);
    ll tu = a*(mau/b)+c*(mau/d);
    a/=gcd(tu,mau);
    b/=gcd(tu,mau);
    cout << tu << " " << mau;
    return 0;
}