#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
vector<int> vst;
void BFS(int u){
    queue<int> q;
    q.push(u);
    vst[u]=1;
    while(!q.empty()){
        int x=q.front();q.pop();
        cout << x << " ";
        for(int v : adj[x]){
            if(!vst[v]){
                q.push(v);
                vst[v]=1;
            }
        }
    }
}
void testcase(){
    int n,m,cur;cin>>n>>m>>cur;
    adj.clear();adj.resize(1005);
    vst.clear();vst.resize(1005);
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    BFS(cur);
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