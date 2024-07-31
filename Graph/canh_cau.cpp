#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[1005];
vector<pair<int,int>> edge;
int n,m;
void DFS(int u,int s,int t){
    vst[u]=1;
    for(auto v : adj[u]){
        if((u==s && v==t) || (u==t && v==s)){
            continue;//Bo qua dinh s va t
        }
        if(!vst[v]){
            DFS(v,s,t);
        }
    }
}
int tplt(int s,int t){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vst[i]){
            ++cnt;
            DFS(i,s,t);
        }
    }
    return cnt;
}
void canh_cau(){
    int cc=tplt(0,0);//So thanh phan lien thong ban dau
    for(pair<int,int> e : edge){
        int s=e.first,t=e.second;
        memset(vst,0,sizeof(vst));
        if(cc < tplt(s,t)){
            cout << s << " " << t << endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    adj.resize(1005);
    edge.resize(1005);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        edge.push_back({x,y});
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    canh_cau();
    return 0;
}