#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool vst[25];
vector<vector<int>> adj;
int n,m,check;
void Hamilton(int u,int cnt){
    if(cnt==n){
        check=1;
        return;
    }
    for(auto v : adj[u]){
        if(!vst[v]){
            vst[v]=1;
            Hamilton(v,cnt+1);
            vst[v]=0;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m;
    adj.resize(1005);
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    Hamilton(1,1);
    cout << (check) ? 1 : 0;
    return 0;
}