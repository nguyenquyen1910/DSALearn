#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100][100],n,m,ans;
int used[100][1000];
void Try(int i,int j){
    if(i==n && j==m){
        ans++;
        return;
    }
    if(i+1<=n && !used[i+1][j]){
        Try(i+1,j);
    }
    if(j+1<=m && !used[i][j+1]){
        Try(i,j+1);
    }
}
void solve(){
    ans=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    Try(1,1);
    cout << ans;
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