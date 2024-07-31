#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mx[8]={-1,-2,-2,-1,1,2,2,1};
int my[8]={-2,-1,1,2,2,1,-1,-2};
int vx[8]={1,-1,0,0,1,-1,1,-1};
int vy[8]={1,1,1,-1,-1,-1,0,0};
int dp1[1001][1001],dp2[1001][1001];
bool vst1[1001][1001],vst2[1001][1001];
char a[1001][1001];
int n,xm,ym,xv,yv;
bool checkPos(int i,int j){
    return i>=1 && i<=n && j>=1 && j<=n;
}
void kingMoving(int x,int y){
    queue<pair<int,int>> q;
    q.push({x,y});
    vst1[x][y]=1;
    while(!q.empty()){
        auto top=q.front();q.pop();
        int i=top.first;
        int j=top.second;
        for(int k=0;k<8;k++){
            int i1=i+vx[k];
            int j1=j+vy[k];
            if(checkPos(i1,j1) && !vst1[i1][j1]){
                vst1[i1][j1]=1;
                dp1[i1][j1]=dp1[i][j]+1;
                q.push({i1,j1});
            }
        }
    }
    return;
}
void horseMoving(int x,int y){
    queue<pair<int,int>> q;
    q.push({x,y});
    vst2[x][y]=1;
    while(!q.empty()){
        auto top=q.front();q.pop();
        int i=top.first;
        int j=top.second;
        for(int k=0;k<8;k++){
            int i1=i+mx[k];
            int j1=j+my[k];
            if(checkPos(i1,j1) && !vst2[i1][j1]){
                vst2[i1][j1]=1;
                dp2[i1][j1]=dp2[i][j]+1;
                q.push({i1,j1});
            }
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]=='#'){
                vst1[i][j]=vst2[i][j]=0;
            }
            else if(a[i][j]=='M'){
                xm=i;ym=j;
            }
            else if(a[i][j]=='T'){
                xv=i;yv=j;
            }
        }
    }
    kingMoving(xv,yv);
    horseMoving(xm,ym);
    int ans=INT_MAX;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dp1[i][j]==dp2[i][j] && dp1[i][j]!=0){
                ans=min(ans,dp1[i][j]);
            }
        }
    }
    cout << ans;
    return 0;
}