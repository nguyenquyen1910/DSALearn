#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
stack<int> st;
bool vst[1005];
void DFS(int u){
    vst[u]=1;
    for(int v : adj[u]){
        if(!vst[v]) DFS(v);
    }
    st.push(u);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    adj.resize(1005);
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        if(!vst[i]){
            DFS(i);
        }
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}