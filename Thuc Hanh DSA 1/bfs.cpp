#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
vector<int> vst;
vector<int> parent;
void BFS(int s, int t) {
    queue<int> q;
    q.push(s);
    vst[s] = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (u == t) break;
        for (int v : adj[u]) {
            if (!vst[v]) {
                vst[v] = 1;
                parent[v] = u;
                q.push(v);
            }
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
    BFS(s,t);
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