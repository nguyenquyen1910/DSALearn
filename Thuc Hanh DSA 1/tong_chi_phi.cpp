#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;cin>>n>>k;
    ll a[n+1];
    priority_queue<ll,vector<ll>,greater<ll>> q;
    for(int i=0;i<n;i++){
        cin>>a[i];
        q.push(a[i]);
    }
    ll res=0;
    while(q.size()>1){
        ll maxnum=INT_MIN,minnum=INT_MAX;
        ll sum=0;
        for(int i=0;i<k && !q.empty();i++){
            ll x=q.top();
            sum+=x;
            q.pop();
            maxnum=max(maxnum,x);
            minnum=min(minnum,x);
        }
        q.push(sum);
        res+=maxnum-minnum;
    }
    while(q.size()>0){
        cout << q.top();
        q.pop();
    }
    cout << endl << res;
    return 0;
}
