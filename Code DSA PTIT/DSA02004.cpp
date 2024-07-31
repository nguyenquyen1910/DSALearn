#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100][100],n;
const int dx[4]={-1,0,1,0};
const int dy[4]={0,1,0,-1};
const string dir="URDL";
vector<string> res;
void Try(int i,int j,string s){
    if(i==n && j==n){
        res.push_back(s);
        return;
    }
    for(int k=0;k<4;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]==1){
            a[i1][j1]=0;
            Try(i1,j1,s+dir[k]);
            a[i1][j1]=1;
        }
    }
}
void solve(){
    res.clear();
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    if(a[1][1]==0 || a[n][n]==0){
        cout << -1;
        return;
    }
    a[1][1]=0;
    Try(1,1,"");
    if(res.size()==0){
        cout << -1;
        return;
    }
    sort(res.begin(),res.end());
    for(auto x : res){
        cout << x << " ";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}