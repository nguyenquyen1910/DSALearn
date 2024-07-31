#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj(1005);
bool vst[1005];
void DFS(int u){
    vst[u]=1;
    for(auto v : adj[u]){
        if(!vst[v]){
            DFS(v);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    int res=n;
    for(int i=1;i<=n;i++){
        memset(vst,0,sizeof(vst));
        int cnt=1;
        DFS(i);
        for(int j=1;j<=n;j++){
            if(!vst[j]){
                DFS(j);
                cnt++;
            }
        }
        res=min(res,cnt);
    }
    cout << res;
    return 0;
}