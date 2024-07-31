//Tim so buoc toi thieu
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[1000][1000];
const int dx[4]={-1,0,1,0};
const int dy[4]={0,1,0,-1};
int n,m;
int solve(pair<int,int> s,pair<int,int> e){
    queue<pair<pair<int,int>,int>> q;
    q.push({s,0});
    while(!q.empty()){
        pair<pair<int,int>,int> top=q.front();q.pop();
        int i=top.first.first;
        int j=top.first.second;
        for(int k=0;k<4;k++){
            int i1=i+dx[k];
            int j1=j+dy[k];
            if(a[i1][j1] && i1>=0 && i1<n && j1>=0 && j1<m){
                a[i1][j1]=0;
                if(i1==e.first && j1==e.second){
                    return top.second+1;
                }
                q.push({{i1,j1},top.second+1});        
            }
        }
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    pair<int,int> s,e;
    cin>>s.first>>s.second>>e.first>>e.second;
    if(a[s.first][s.second] && a[e.first][e.second])
        cout << solve(s,e);
    else cout << -1;
    return 0;
}