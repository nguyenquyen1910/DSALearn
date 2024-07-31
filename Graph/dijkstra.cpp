//Tim duong di ngan nhat
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<int,int> ii;
vector<vector<ii>> adj(1005);
vector<int> d;
bool vst[1005];
int n,m,s;
struct cmp{
    bool operator() (pair<int,int> a,pair<int,int> b){
        return a.second>b.second;
    }
};
void Dijkstra(int s){
    priority_queue<ii, vector<ii>, cmp> q;
    q.push({s,0});
    d[s]=0;
    while(!q.empty()){
        int u=q.top().first,w=q.top().second;
        q.pop();
        vst[u]=true;
        for(ii e : adj[u]){
            int v=e.first;
            if(!vst[v]){
                d[v]=min(d[v],w+e.second);
                q.push({v,d[v]});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout << d[i] << " ";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m>>s;
    for(int i=0;i<m;i++){
        int x,y,w;cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    Dijkstra(s);
    return 0;
}