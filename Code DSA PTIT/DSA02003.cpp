#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100][100],n;
vector<string> v;
void Try(int i,int j,string s){
    if(i==n && j==n){
        v.push_back(s);
    }
    if(i+1<=n && a[i+1][j]==1){
        a[i+1][j]=0;
        s+='D';
        Try(i+1,j,s);
        a[i+1][j]=1;
        s.pop_back();
    }
    if(j+1<=n && a[i][j+1]==1){
        a[i][j+1]=0;
        s+='R';
        Try(i,j+1,s);
        a[i][j+1]=1;
        s.pop_back();
    }
}
void solve(){
    v.clear();
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    if(a[1][1]==0 || a[n][n]==0){
        cout << "-1";
        return;
    }
    string s="";
    Try(1,1,s);
    if(v.empty()){
        cout << "-1";
        return;
    }
    sort(v.begin(),v.end());
    for(auto x : v){
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