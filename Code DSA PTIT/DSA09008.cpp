#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
vector<int> vst;
void DFS(int u){
    vst[u]=true;
    for(int v : adj[u]){
        if(!vst[v]){
            DFS(v);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        adj.clear();adj.resize(1005);
        vst.clear();vst.resize(1005);
        int n,m;cin>>n>>m;
        for(int i=0;i<m;i++){
            int x,y;cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(!vst[i]){
                ++cnt;
                DFS(i);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}