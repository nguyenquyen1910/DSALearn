#include<bits/stdc++.h>
using namespace std;
using ll = long long;
char a[505][505];
bool vst[505][505];
pair<int,int> u,v;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
char dh[4]={'B','T','D','N'};
bool ok;
int n,m;
void DFS(int x,int y,int cnt,char DH){
    vst[x][y]=1;
    if(x==v.first && y==v.second && cnt<=3){
        ok=1;
        return;
    }
    if(cnt>3 || a[x][y]=='T'){
        vst[x][y]=false;
        return;
    }
    for(int k=0;k<4;k++){
        int i1=x+dx[k];
        int j1=y+dy[k];
        if(i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1]!='*' && !vst[i1][j1]){
            if(dh[k]!=DH){
                DFS(i1,j1,cnt+1,dh[k]);
            }
            else DFS(i1,j1,cnt,dh[k]);
        }
    }
    vst[x][y]=0;
}
void testCase(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='S') u={i,j};
            if(a[i][j]=='T') v={i,j};
        }
    }
    ok=0;
    memset(vst,0,sizeof(vst));
    DFS(u.first,u.second,0,'X');
    if(ok) cout << "YES";
    else cout << "NO";
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