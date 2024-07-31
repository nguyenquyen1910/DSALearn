#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[1005];
int n,m,ok;
void DFS(int u,int cnt){
    if(cnt==n) ok=1;
    if(ok) return;
    for(auto v : adj[u]){
        if(!vst[v]){
            vst[v]=1;
            DFS(v,cnt+1);
            vst[v]=0;
        }
    }
}
void testcase(){
    adj.clear();adj.resize(1005);
    memset(vst,0,sizeof(vst));
    ok=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y; 
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        memset(vst,0,sizeof(vst));
        vst[i]=1;
        DFS(i,1);
        if(ok) break;
    }
    DFS(1,0);
    cout << (ok) ? 1 : 0;
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