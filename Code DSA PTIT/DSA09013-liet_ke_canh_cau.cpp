#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[1005];
vector<pair<int,int>> edge;
void DFS(int u,int s,int t){
    vst[u]=1;
    for(auto v : adj[u]){
        if((u==s && v==t) || (u==t && v==s))
            continue;
        if(!vst[v]){
            DFS(v,s,t);
        }
    }
}
void reset(){
    adj.clear();adj.resize(1005);
    edge.clear();edge.resize(1005);
    memset(vst,0,sizeof(vst));
}
int tplt(int n,int s,int t){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vst[i]){
            ++cnt;
            DFS(i,s,t);
        }
    }
    return cnt;
}
void testcase(){
    reset();
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        edge.push_back({x,y});
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int cc=tplt(n,0,0);
    for(pair<int,int> e : edge){
        int s=e.first,t=e.second;
        memset(vst,0,sizeof(vst));
        if(cc < tplt(n,s,t)){
            cout << s << " " << t << " ";
        }
    }
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