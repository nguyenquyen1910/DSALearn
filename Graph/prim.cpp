#include<bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<int,int> ii;
vector<ii> adj[1005];
int n,m;
bool taken[1005];
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y,w;cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[x].push_back({x,w});
    }
    memset(taken,0,sizeof(taken));
}
void Prim(int s){
    priority_queue<ii,vector<ii>,greater<ii>> Q;
    taken[s]=1;
    int d=0;
    for(ii x : adj[s]){
        if(!taken[x.first]){
            Q.push({x.second,x.first});
        }
    }
    while(!Q.empty()){
        ii top=Q.top();Q.pop();
        int u=top.second,w=top.first;
        if(!taken[u]){
            d+=w;
            taken[u]=1;
            for(ii x : adj[u]){
                if(!taken[x.first]){
                    Q.push({x.second,x.first});
                }
            }
        }
    }
    cout << d;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    Prim(1);
    return 0;
}