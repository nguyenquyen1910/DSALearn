//Tinh a^b chia du cho c
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll binpow(ll a,ll b,ll c){
    if(b==0) return 1;
    ll res=binpow(a,b/2,c);
    if(b%2==1)
        return ((res%c) * (res%c) * (a%c)) % c;
    else return ((res%c) * (res%c)) % c;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}