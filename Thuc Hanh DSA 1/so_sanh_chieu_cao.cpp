#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
unordered_map<string,vector<string>> adj;
unordered_map<string,int> degree;
set<string> se;
bool Kahn(){
    queue<string> q;
    for(auto x : se){
        if(degree[x]==0) q.push(x);
    }
    int cnt=0;
    while(!q.empty()){
        string top=q.front();q.pop();
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
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b,c;cin>>a>>b>>c;
        se.insert(a);
        se.insert(c);
        if(b==">"){
            adj[a].push_back(c);
            degree[c]++;
        }
        else{
            adj[c].push_back(a);
            degree[a]++;
        }
    }
    if(Kahn()) cout << "possible";
    else cout << "impossible";
    return 0;
}