//Kiểm tra thành phần liên thông
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> adj[1005],t_adj[1005];
bool vst[1005];
stack<int> st;
int n,m;
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        t_adj[y].push_back(x);
    }
    memset(vst,0,sizeof(vst));
}
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
    cout << u << " ";
    for(auto v : t_adj[u]){
        if(!vst[v]){
            DFS2(v);
        }
    }
}
void Kosaraju(){
    for(int i=1;i<=n;i++){
        if(!vst[i]) DFS1(i);
    }
    memset(vst,0,sizeof(vst));
    int scc=0;
    while(!st.empty()){
        int u=st.top();st.pop();
        if(!vst[u]){
            ++scc;
            cout << "SCC " << scc << " : ";
            DFS2(u);
            cout << endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    Kosaraju();
    return 0;
}