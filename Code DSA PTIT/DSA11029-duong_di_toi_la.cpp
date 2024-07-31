#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[100005];
vector<string> res;
inline void DFS(int u,string s){
    if(adj[u].empty()){
        res.push_back(s);
    }
    vst[u]=1;
    for(auto v : adj[u]){
        if(!vst[v]){
            DFS(v,s+" "+to_string(v));
        }
    }
}
inline bool cmp(string a,string b){
    int pos1=a.find_last_of(" ");
    int pos2=b.find_last_of(" ");
    return stoi(a.substr(pos1,100001))<stoi(b.substr(pos2,100001));
}
inline void testCase(){
    adj.clear();adj.resize(100005);
    memset(vst,0,sizeof(vst));
    res.clear();
    int n;cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
    }
    DFS(1,"1");
    sort(res.begin(),res.end(),cmp);
    for(auto x : res){
        cout << x << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
    }
    return 0;
}