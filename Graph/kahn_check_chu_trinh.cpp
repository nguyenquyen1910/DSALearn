#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
vector<vector<int>> adj(1005);
int degree[1005];
void input(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        degree[y]++;
    }
}
bool Kahn(int n){
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(degree[i]==0) q.push(i);
    }
    int cnt=0;
    while(!q.empty()){
        int top=q.front();q.pop();
        cnt++;
        for(auto v : adj[top]){
            degree[v]--;
            if(degree[v]==0) q.push(v);
        }
    }
    return cnt==n;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    input();
    if(Kahn(n)) cout << "NO";
    else cout << "YES";
    return 0;
}