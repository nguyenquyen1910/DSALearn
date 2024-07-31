#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
vector<int> vst;
int parent[1005];
void DFS(int u){
    vst[u]=1;
    for(int v : adj[u]){
        if(!vst[v]){
            parent[v]=u;
            DFS(v);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    adj.clear();adj.resize(1005);
    vst.clear();vst.resize(1005);
    int n,m,s,t;cin>>n>>s>>t;
    cin>>n;
    int a[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    DFS(s);
    if(!vst[t]) cout << -1;
    else{
        vector<int> way;
        while(t!=s){
            way.push_back(t);
            t=parent[t];
        }
        way.push_back(s);
        reverse(way.begin(),way.end());
        for(int x : way){
            cout << x << " ";
        }
    }
    return 0;
}