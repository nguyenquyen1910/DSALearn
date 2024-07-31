#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,parent[10005],sz[10005];
void init(){
    for(int i=1;i<=n;i++){
        parent[i]=i;
        sz[i]=1;
    }
}
int Find(int u){
    if(u==parent[u]) return u;
    parent[u]=Find(parent[u]);
    return parent[u];
}
void Union(int u,int v){
    u=Find(u);v=Find(v);
    if(u==v) return;
    if(sz[u]<sz[v]) swap(u,v);
    parent[v]=u;
    sz[u]+=sz[v];
}
void testCase(){
    cin>>n>>m;
    init();
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        Union(x,y);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(parent[i]==i) cnt++;
    }
    cout << cnt;
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