#include<bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<int,int> ii;
int a[505][505];
int n,m;
const int dx[4]={-1,0,1,0};
const int dy[4]={0,1,0,-1};
void dijkstra(int a[][505]){
    priority_queue<pair<int, ii>, vector<pair<int, ii>>, greater<pair<int, ii>>> pq;
    vector<vector<int>> res(n,vector<int>(m,INT_MAX));
    pq.push({a[0][0],{0,0}});
    res[0][0]=a[0][0];
    while(!pq.empty()){
        auto top=pq.top();pq.pop();
        int x=top.second.first;
        int y=top.second.second;
        int w=top.first;
        if(w>res[x][y]) continue;
        for(int i=0;i<4;i++){
            int x1=x+dx[i];
            int y1=y+dy[i];
            if(x1>=0 && x1<n && y1>=0 && y1<m){
                if(res[x1][y1]>res[x][y]+a[x1][y1]){
                    res[x1][y1]=res[x][y]+a[x1][y1];
                    pq.push({res[x1][y1],{x1,y1}});
                }
            }
        }
    }
    cout << res[n-1][m-1];
}
void testCase(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    dijkstra(a);
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