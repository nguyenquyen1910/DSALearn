//Kiem tra thanh phan lien thong manh voi 1 lan DFS
// Nhung dinh co disc[u]==low[u] la dinh bat dau cua 1 thlt manh
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,timer=0;
vector<vector<int>> adj(1001);
int disc[1005];//Mang nay ghi lai thoi gian tham den dinh hien tai
int low[1005];//Mang nay ghi lai gia tri nho nhat neu co duong di tu dinh nay den dinh kia
bool vst[1005];
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
}
void DFS(int u){
    vst[u]=1;
    disc[u]=low[u]=++timer;
    for(auto v : adj[u]){
        if(!vst[v]){
            DFS(v);
            low[u]=min(low[u],low[v]);// Cap nhat gia tri nho nhat neu co duong di cho low[u]
        }
        else{
            low[u]=min(low[u],disc[v]);// Neu khong co cap nhap theo gia tri cua timer
        }
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
    for(int i=1;i<=n;i++){
        cout << disc[i] << " " << low[i] << endl;
    }
    return 0;
}