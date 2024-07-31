#include <bits/stdc++.h>
using namespace std;
int V,E,q,u,v,x,y;
vector<vector<int>> adj;
vector<bool> vst;
void BFS(int u) {
    vst.clear();vst.resize(V+1,0);
    queue<int> q;
    q.push(u);
    vst[u]=true;
    while (!q.empty()) {
        u=q.front();q.pop();
        for(int v : adj[u]) {
            if(vst[v] == false) {
                q.push(v);
                vst[v] = true;
            }
        }
    }
}
void testCase() {
    cin>>V>>E;
    adj.clear();adj.resize(V + 1);
    for(int i=1;i<=E;++i) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> q;
    while(q--){
        cin>>x>>y;
        BFS(x);
        cout << (vst[y] ? "YES" : "NO") << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;cin >> T;
    while(T--){
        testCase();
        cout << endl;
    }
    return 0;
}