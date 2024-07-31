#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> a(n);
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            pq.push(a[i]);
        }
        ll res=0;
        while(pq.size()>1){
            ll x=pq.top();pq.pop();
            ll y=pq.top();pq.pop();
            ll tmp=(x+y)%MOD;
            pq.push(tmp);
            res+=tmp;
            res%=MOD;
        }
        cout << res << endl;
    }
    return 0;
}