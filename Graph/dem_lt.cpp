#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
vector<vector<int>> adj(1005);
bool vst[1005];
void nhap(){
    cin>>n;
    int a[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    vst[u]=true;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int v : adj[x]){
            if(!vst[v]){
                q.push(v);
                vst[v]=true;
            }
            
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vst[i]){
            ++cnt;
            BFS(i);
        }
    }   
    cout << cnt;
    return 0;
}