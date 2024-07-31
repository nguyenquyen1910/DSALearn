#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
set<pair<int,int>> se;
bool checkDFS(int u){
    for(auto v : adj[u]){
        for(auto x : adj[v]){
            if(se.count({u,x})==0 && x!=u) return false;
        }
    }
    return true;
}
void testCase(){
    adj.clear();adj.resize(100005);
    se.clear();
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        se.insert({x,y});
        se.insert({y,x});
    }
    for(int i=1;i<=n;i++){
        if(!checkDFS(i)){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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