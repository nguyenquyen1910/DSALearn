#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;map<ll,ll> mp;
    ll tong=0,res=0;
    cin>>n;
    mp[0]++;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        tong+=x;
        res+=mp[tong];
        mp[tong]++;
    }
    cout << res;
    return 0;
}