#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj,t_adj;
bool vst[1005];
stack<int> st;
void DFS1(int u){
    vst[u]=1;
    for(auto v : adj[u]){
        if(!vst[v]){
            DFS1(v);
        }
    }
    st.push(u);
}
void DFS2(int u){
    vst[u]=1;
    for(auto v : t_adj[u]){
        if(!vst[v]) DFS2(v);
    }
}
int Kosaraju(int n){
    for(int i=1;i<=n;i++){
        if(!vst[i]) DFS1(i);
    }
    memset(vst,0,sizeof(vst));
    int scc=0;
    while(!st.empty()){
        int u=st.top();st.pop();
        if(!vst[u]){
            ++scc;
            DFS2(u);
        }
    }
    return scc;
}
void testcase(){
    adj.clear();adj.resize(1005);
    t_adj.clear();t_adj.resize(1005);
    memset(vst,0,sizeof(vst));
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        t_adj[y].push_back(x);
    }
    if(Kosaraju(n)==1) cout << "YES";
    else cout << "NO";
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