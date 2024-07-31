#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
vector<bool> vst;
int res;
void BFS(int s) {
    int ans=1;
    queue<int> q;
    q.push(s);
    vst[s]=true;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(auto v : adj[u]){
            if(!vst[v]){
                ans++;
                q.push(v);
                vst[v]=true;
            }
        }
    }
    res=max(res, ans);
}
void testcase(){
    int n,m;cin>>n>>m;
    adj.clear();adj.resize(n+1);
    vst.clear();vst.resize(n+1);
    res=INT_MIN;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(!vst[i]){
            BFS(i);
        }
    }
    cout << res;
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