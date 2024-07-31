#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m,a[105][105],cnt=0;
bool vst[105][105];
void Try(int i,int j){
    if(i==n && j==m){
        cnt++;
        return;
    }
    if(i+1<=n && !vst[i+1][j]) Try(i+1,j);
    if(j+1<=m && !vst[i][j+1]) Try(i,j+1);
}
void testCase(){
    cnt=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    memset(vst,0,sizeof(vst));
    Try(1,1);
    cout << cnt;
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