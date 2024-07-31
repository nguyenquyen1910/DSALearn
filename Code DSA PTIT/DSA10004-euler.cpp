#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> adj;
bool vst[1005];
int checkEuler(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(adj[i].size()%2==1) ++cnt;
    }
    if(cnt==2) return 1;
    if(cnt==0) return 2;
    return 0;
}
void testCase(){
    adj.clear();adj.resize(1005);
    memset(vst,0,sizeof(vst));
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout << checkEuler(n);
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