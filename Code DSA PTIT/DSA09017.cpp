#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[1005];
bool DFS(int u,int par){
    vst[u]=1;
    for(int v : adj[u]){
        if(!vst[v]){
            if(DFS(v,u)) return true;
        }
        else if(v!=par) return true;
    }
    return false;
}
void testcase(){
    adj.clear();adj.resize(1005);
    memset(vst,0,sizeof(vst));
    int n;cin>>n;
    for(int i=1;i<n;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(!vst[i]){
            if(DFS(i,0)){
                cout << "NO\n";
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