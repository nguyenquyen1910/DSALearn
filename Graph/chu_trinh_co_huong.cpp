#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
int color[1005];
bool DFS(int u){
    color[u]=1;
    for(int v : adj[u]){
        if(color[v]==0){
            if(DFS(v)){
                return true;
            }
        }
        else if(color[v]==1){
            return 1;
        }
    }
    color[u]=2;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    adj.resize(1005);
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        if(color[i]==0){
            if(DFS(i)){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}