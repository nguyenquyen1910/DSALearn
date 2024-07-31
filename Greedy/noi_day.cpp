#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        pq.push(a[i]);
    }
    ll res=0;
    while(pq.size()>1){
        ll fi=pq.top();pq.pop();
        ll se=pq.top();pq.pop();
        res+=fi+se;
        pq.push(fi+se);
    }
    cout << res;
    return 0;
}