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
int Find(int u) {
    if(u==par[u]) return u;
    return par[u]=Find(par[u]);
}
bool Union(int u,int v){
    u=Find(u);v=Find(v);
    if(u==v) return true;
    if(sz[u]<sz[v]) swap(u,v);
    par[v]=u;
    sz[u]+=sz[v];
    return false;
}
void testCase(){
    cin>>n>>m;
    init();
    bool ok=0;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        if(Union(x,y)) ok=1;
    }
    if(ok) cout << "YES";
    else cout << "NO";
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