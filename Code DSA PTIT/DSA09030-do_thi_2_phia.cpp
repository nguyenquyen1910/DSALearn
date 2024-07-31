#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
int color[1005];
bool checkBipartite(int u){
    queue<int> q;
    q.push(u);
    color[u]=0;
    while(!q.empty()){
        int top=q.front();q.pop();
        for(auto v : adj[top]){
            if(color[v]==-1){
                color[v]=1-color[top];
                q.push(v);
            }
            else if(color[v]==color[top]){
                return false;
            }
        }
    }
    return true;
}
void testCase(){
    adj.clear();adj.resize(1005);
    memset(color,-1,sizeof(color));
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(color[i]==-1){
            if(!checkBipartite(i)){
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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