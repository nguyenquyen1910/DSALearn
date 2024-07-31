//Tim canh cau voi tarjan
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<int,int> ii;
int n,m,timer=0;
vector<vector<int>> adj(1005);
int disc[1005],low[1005];
bool vst[1005];
vector<ii> bridge;
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(vst,0,sizeof(vst));
}
void DFS(int u,int par){
    vst[u]=1;
    disc[u]=low[u]=++timer;
    for(auto v : adj[u]){
        if(v==par) continue;
        if(!vst[v]){
            DFS(v,u);
            low[u]=min(low[u],low[v]);
            if(disc[u]<low[v]){
                bridge.push_back({u,v});
            }
        }
        else{
            low[u]=min(low[u],disc[v]);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    for(int i=1;i<=n;i++){
        if(!vst[i]) DFS(i,-1);
    }
    for(auto x : bridge){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}