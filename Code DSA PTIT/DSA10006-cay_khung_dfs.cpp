#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> adj[1005];
bool vst[1005];
vector<pair<int,int>> Tree;
void DFS(int u){
    vst[u]=1;
    for(auto v : adj[u]){
        if(!vst[v]){
            Tree.push_back({u,v});
            DFS(v);
        }
    }
}
void testCase(){
    Tree.clear();
    for(int i=0;i<1005;i++){
        adj[i].clear();
        vst[i]=0;
    }
    int n,m,k;cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    DFS(k);
    if(Tree.size()==n-1){
        for(auto v : Tree){
            cout << v.first << " " << v.second << endl;
        }
    }
    else{
        cout << -1 << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
    }
    return 0;
}