#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> res;
void init(){
    queue<ll> q;
    q.push(1);
    while(!q.empty()){
        ll top=q.front();q.pop();
        if(top>=1e18) break;
        res.push_back(top);
        q.push(top*10);
        q.push(top*10+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll cnt=0;
        for(int i=0;i<res.size();i++){
            if(res[i]<=n) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}