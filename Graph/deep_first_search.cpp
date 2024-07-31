#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,cur;
vector<int> adj[1005];
bool visited[1005];
void nhap(){
    cin>>n>>m>>cur;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}
void DFS(int u){
    cout << u << " ";
    visited[u]=true;
    for(auto v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    DFS(cur);
    return 0;
}