#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
vector<int> vst,parent;
void DFS(int u){
    vst[u]=1;
    for(int v : adj[u]){
        if(!vst[v]){
            parent[v]=u;
            DFS(v);
        }
    }
}
void testcase(){
    adj.clear();adj.resize(1005);
    vst.clear();vst.resize(1005);
    parent.clear();parent.resize(1005);
    int n,m,s,t;cin>>n>>m>>s>>t;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    DFS(s);
    if(!vst[t]) cout << -1;
    else{
        vector<int> way;
        while(s!=t){
            way.push_back(t);
            t=parent[t];
        }
        way.push_back(s);
        reverse(way.begin(),way.end());
        for(int x : way){
            cout << x << " ";
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}