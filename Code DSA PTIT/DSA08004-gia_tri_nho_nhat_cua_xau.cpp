#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int k;cin>>k;
    string s;cin>>s;
    int dd[127]={};
    for(char x : s) dd[x]++;
    priority_queue<int> q;
    for(auto x : dd){
        if(x>0) q.push(x);
    }
    while(k--){
        if(q.empty()) break;
        int x=q.top();q.pop();
        x--;
        q.push(x);
    }
    ll ans=0;
    while(!q.empty()){
        ll x=q.top();q.pop();
        ans+=x*x;
    }
    cout << ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}