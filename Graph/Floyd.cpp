#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int Mat[1005][1005];
int n,m;
void Floyd(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                Mat[i][j]=min(Mat[i][j],Mat[i][k]+Mat[k][j]);
            }
        }
    }
}
void testCase(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            Mat[i][j]=1e9;
            Mat[i][i]=0;
        }
    }
    for(int i=0;i<m;i++){
        int x,y,z;cin>>x>>y>>z;
        Mat[x][y]=Mat[y][x]=z;
    }
    Floyd();
    int q;cin>>q;
    while(q--){
        int u,v;cin>>u>>v;
        cout << Mat[u][v] << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    testCase();
    return 0;
}