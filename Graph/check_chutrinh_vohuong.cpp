#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
vector<vector<int>> adj;
vector<bool> vst;
int parent[1005];
//DFS
bool DFS(int u){
    vst[u]=1;
    for(auto v : adj[u]){
        if(!vst[v]){
            parent[v]=u;
            if(DFS(v)) return 1;
        }
        else if(v!=parent[u]){
            return 1;
        }
    }
    return 0;
}
//BFS
// bool BFS(int u){
//     queue<int> q;
//     q.push(u);
//     vst[u]=1;
//     while(!q.empty()){
//         int x=q.front();q.pop();
//         for(auto v : adj[x]){
//             if(!vst[v]){
//                 q.push(v);
//                 vst[v]=1;
//                 parent[v]=x;
//             }
//             else if(v!=parent[x]){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}