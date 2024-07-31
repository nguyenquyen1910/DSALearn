#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[1005];
int n,m;
void DFS(int u){
    vst[u]=1;
    for(auto v : adj[u]){
        if(!vst[v]){
            DFS(v);
        }
    }
}
int tplt(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vst[i]){
            ++cnt;
            DFS(i);
        }
    }
    return cnt;
}
void dinh_tru(){
    int cc=tplt();//So thanh phan lien thong ban dau
    for(int i=1;i<=n;i++){
        memset(vst,0,sizeof(vst));
        vst[i]=1;
        if(cc < tplt()){
            cout << i << ' ';
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    adj.resize(1005);
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
    dinh_tru();
    return 0;
}