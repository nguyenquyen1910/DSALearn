#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
vector<int> vst;
void DFS(int u){
    cout << u << " ";
    vst[u]=1;
    for(int v : adj[u]){
        if(!vst[v]){
            DFS(v);
        }
    }
}
void testcase(){
    adj.clear();adj.resize(1005);
    vst.clear();vst.resize(1005);
    int n,m,cur;cin>>n>>m>>cur;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    DFS(cur);
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