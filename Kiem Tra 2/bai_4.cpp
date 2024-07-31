#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
int par[100000],sz[100000];
void init(){    
    for(int i=1;i<=n;i++){
        par[i]=i;
        sz[i]=1;
    }
}
int Find(int u){
    if(u==par[u]) return u;
    par[u]=Find(par[u]);
    return par[u];
}
void Union(int u,int v){
    u=Find(u);v=Find(v);
    if(u==v) return;
    if(sz[u]<sz[v]) swap(u,v);
    par[v]=u;
    sz[u]+=sz[v];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m;
    init();
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        Union(x,y);
    }
    int a=Find(1);
    int res=sz[a];
    for(int i=2;i<=n;i++){
        if(i==par[i] && i!=a){
            res=max(res,sz[i]+sz[a]);
        }
    }
    cout << res;
    return 0;
}