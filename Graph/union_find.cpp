#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
int parent[1005],sz[1005];
//Tim dai dien cho u
int Find(int u){
    if(u==parent[u]) return u;
    parent[u]=Find(parent[u]);
    return parent[u];
}//Da toi uu nén đường
bool Union(int u,int v){
    u=Find(u);v=Find(v);
    if(u==v) return false;
    if(sz[u]<sz[v]) swap(u,v);
    parent[v]=u;
    sz[u]+=sz[v];
    return true;
}//Đã tối ưu theo size
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}