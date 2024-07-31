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
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    DFS(1);
    for(int i=2;i<=n;i++){
        if(vst[i]){
            vector<int> way;
            while(i!=1){
                way.push_back(i);
                i=parent[i];
            }
            way.push_back(1);
            reverse(way.begin(),way.end());
            for(int x : way){
                cout << x << " ";
            }
        }
    }
    return 0;
}