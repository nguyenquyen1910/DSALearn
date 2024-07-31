//Tim dinh tru va canh cau voi Tarjan
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,timer=0;
vector<vector<int>> adj(1005);
int disc[1005],low[1005];
bool vst[1005],AP[1005];
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(vst,false,sizeof(vst));
    memset(AP,false,sizeof(AP));
}
void DFS(int u,int par){
    vst[u]=true;
    disc[u]=low[u]=++timer;
    int child=0;
    for(auto v : adj[u]){
        if(v==par) continue;
        if(!vst[v]){
            DFS(v,u);
            ++child;
            low[u]=min(low[u],low[v]);
            if(par!=-1 && disc[u]<=low[v]){
                AP[u]=true;
            }
        }
        else{
            low[u]=min(low[u],disc[v]);
        }
    }
    if(par==-1 && child>1){
        AP[u]=true;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    for(int i=1;i<=n;i++){
        if(!vst[i]){
            DFS(i,-1);
        }
    }
    for(int i=1;i<=n;i++){
        if(AP[i]) cout << i << " ";
    }
    return 0;
}