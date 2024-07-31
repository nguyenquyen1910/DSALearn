#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[100005];
int res=INT_MIN;
void DFS(int u,int cnt){
    res=max(res,cnt);
    vst[u]=1;
    for(auto v : adj[u]){
        if(!vst[v]){
            DFS(v,cnt+1);
        }
    }
}
void testCase(){
    adj.clear();adj.resize(100005);
    memset(vst,0,sizeof(vst));
    res=INT_MIN;
    int n;cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    DFS(1,0);
    cout << res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}