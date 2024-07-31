#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD=1e9+7;
void testcase(){
    ll n;cin>>n;
    priority_queue<ll,vector<ll>,greater<ll>> q;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        q.push(x);
    }
    ll res=0;
    while(q.size()>1){
        ll x=q.top();q.pop();
        ll y=q.top();q.pop();
        ll tmp=(x+y)%MOD;
        res=(res+tmp)%MOD;
        q.push(tmp);
    }
    cout << res;
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