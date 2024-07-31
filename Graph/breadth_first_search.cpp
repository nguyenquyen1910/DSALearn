#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,cur;
vector<vector<int>> adj(1005);
bool vst[1005];
void nhap(){
    cin>>n>>m>>cur;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(vst,false,sizeof(vst));
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    vst[u]=true;
    while(!q.empty()){
        int x=q.front();q.pop();
        cout << x << " ";
        for(int v : adj[x]){
            if(!vst[v]){
                q.push(v);
                vst[v]=true;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    BFS(cur);
    return 0;
}