//In ra thanh phan lien thong manh bang tarjan
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,timer=0,scc=0;
vector<vector<int>> adj;
int disc[1005],low[1005];
bool vst[1005],in_stack[1005];
stack<int> st;
void nhap(){
    adj.resize(1005);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    memset(vst,false,sizeof(vst));
    memset(in_stack,false,sizeof(vst));
}
void DFS(int u){
    vst[u]=true;in_stack[u]=true;
    disc[u] = low[u] = ++timer;
    st.push(u);
    for(auto v : adj[u]){
        if(!vst[v]){
            DFS(v);
            low[u]=min(low[u],low[v]);
        }
        else{
            low[u]=min(low[u],disc[v]);
        }
    }
    if(low[u]==disc[u]){
        ++scc;
        while(st.top()!=u){
            cout << st.top() << " ";
            in_stack[st.top()]=false;
            st.pop();
        }
        cout << st.top() << endl;
        in_stack[st.top()]=false;
        st.pop();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    for(int i=1;i<=n;i++){
        if(!vst[i]){
            DFS(i);
        }
    }
    cout << scc << endl;
    return 0;
}