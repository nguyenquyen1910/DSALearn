#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[1005];
void DFS(int u){
    vst[u]=1;
    for(auto v : adj[u]){
        if(!vst[v]){
            DFS(v);
        }
    }
}
void reset(){
    adj.clear();adj.resize(1005);
    memset(vst,0,sizeof(vst));
}
void testcase(){
    reset();
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        memset(vst,0,sizeof(vst));
        DFS(i);
        for(int j=1;j<=n;j++){
            if(!vst[j]){
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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