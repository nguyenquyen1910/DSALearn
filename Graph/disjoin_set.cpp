#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
int n,m,parent[1005],sz[1005];
void init(){    
    for(int i=1;i<=n;i++){
        parent[i]=i;
        sz[i]=1;
    }
}
int Find(int u){
    if(u==parent[u]) return u;
    return parent[u]==Find(parent[u]);
}
bool Union(int u,int v){
    u=Find(u);v=Find(v);
    if(u==v) return false;
    if(sz[u]<sz[v]) swap(u,v);
    parent[v]=u;
    sz[u]+=sz[v];
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    adj.resize(1005);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    init();
    bool ok=0;
    for(int i=1;i<=n;i++){
        for(auto v : adj[i]){
            if(!Union(i,v)){
                ok=1;
                break;
            }
        }
        if(ok) break;
    }
    cout << ((ok) ? "YES" : "NO");
    return 0;
}