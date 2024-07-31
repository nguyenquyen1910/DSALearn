#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n+1,vector<int>(m+1));
    vector<vector<bool>> vst(n+1,vector<bool>(m+1,false));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    queue<pair<pair<int,int>,int>> q;
    q.push({{1,1},0});
    while(!q.empty()){
        pair<pair<int,int>,int> top=q.front();q.pop();
        int i=top.first.first;
        int j=top.first.second;
        if(i==n && j==m){
            cout << top.second;
            return;
        }
        if((j+a[i][j])<=m && vst[i][j+a[i][j]]==0){
            vst[i][j+a[i][j]]=1;
            q.push({{i,j+a[i][j]},top.second+1});
        }
        if(i+a[i][j]<=n && vst[i+a[i][j]][j]==0){
            vst[i+a[i][j]][j]=1;
            q.push({{i+a[i][j],j},top.second+1});
        }
    }
    cout << -1;
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