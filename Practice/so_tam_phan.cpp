#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll> res;
bool check(ll n){
    string s=to_string(n);
    int cnt2=0;
    for(auto x : s){
        if(x=='2') cnt2++;
    }
    if(cnt2==0) return false;
    return cnt2>(s.size()/2);
}
void init(){
    queue<ll> q;
    q.push(1);
    q.push(2);
    while(!q.empty()){
        ll top=q.front();q.pop();
        if(check(top)) res.push_back(top);
        if(top>=1e5) break;
        for(int i=0;i<=2;i++){
            ll tmp=top*10+i;
            if(check(tmp)){
                q.push(tmp);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    int t;cin>>t;
    while(t--){
        int n; cin >> n;
        for(int i=0;i<n;i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
