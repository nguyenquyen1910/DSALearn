#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;cin>>n>>k;
    vector<string> v(n);
    for(auto &x : v) cin>>x;
    unordered_map<int,int> mp;
    for(int i=0;i<k;i++){
        mp[v[i].size()]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        if(i+k<n) mp[v[i+1].size()]++;
        ans+=mp[v[i].size()]-1;
        mp[v[i].size()]--;
    }
    cout << ans;
    return 0;
}