#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[1005];
int degree[1005],n,m;
void KAHN(){
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(degree[i]==0) q.push(i);
    }
    vector<int> topo;
    while(!q.empty()){
        int u=q.front();q.pop();
        topo.push_back(u);
        for(int v : adj[u]){
            degree[v]--;
            if(degree[v]==0) q.push(v);
        }
    }
    if(topo.size()<n) cout << "Do thi co chu trinh";
    else{
        for(int x : topo){
            cout << x << " ";
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    adj.resize(1005);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    KAHN();
    return 0;
}