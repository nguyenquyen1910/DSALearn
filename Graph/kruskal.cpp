#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct edge{
    int x,y,w;
};
int n,m;
vector<edge> E;
int parent[1005],sz[1005];
void in(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y,w;cin>>x>>y>>w;
        edge e{x,y,w};
        E.push_back(e);
    }
}
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
void Kruskal(){
    vector<edge> MST;
    int d=0;
    sort(E.begin(),E.end(),[](edge x,edge y)->bool{
        return x.w<y.w;
    });
    for(edge e : E){
        if(MST.size()==n-1) break;
        if(Union(e.x,e.y)){
            MST.push_back(e);
            d+=e.w;
        }
    }
    if(MST.size()<n-1){
        cout << "NO\n";
    }
    else{
        cout << d << endl;
        for(auto e : MST){
            cout << e.x << " " << e.y << " " << e.w << endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    in();
    init();
    Kruskal();
    return 0;
}