#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> adj[1005];
bool vst[1005];
int W[1005][1005];
bool BFS(int u){
    queue<pair<int,int>> q;
    q.push({u,0});
    vst[u]=1;
    while(!q.empty()){
        pair<int,int> top=q.front();q.pop();
        for(auto v : adj[top.first]){
            if(!vst[v]){
                q.push({v,top.second+W[top.first][v]});
                vst[v]=1;
                break;
            }
            else if(v==u && top.second+W[top.first][v]<0) return true;
        }
    }
    return false;
}
bool checkCycle(int n){
    for(int i=1;i<=n;i++){
        memset(vst,0,sizeof(vst));
        if(BFS(i)) return true;
    }
    return false;
}
void testCase(){
    for(int i=0;i<1005;i++){
        adj[i].clear();
        vst[i]=0;
    }
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y,w;cin>>x>>y>>w;
        adj[x].push_back(y);
        W[x][y]=w;
    }
    cout << checkCycle(n);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}