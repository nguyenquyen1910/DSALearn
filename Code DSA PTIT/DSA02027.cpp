#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,c[100][100],a[100],ans=1e9,cmin=1e9;
bool visited[100];
void nhap(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
            if(c[i][j])
                cmin=min(cmin,c[i][j]);
        }
    }
    memset(visited,false,sizeof(visited));
}
void Try(int i,int sum){
    for(int j=2;j<=n;j++){
        if(visited[j]==false){
            visited[j]=true;
            a[i]=j;
            sum+=c[a[i-1]][a[i]];
            if(i==n){
                ans=min(ans,sum+c[a[n]][a[1]]);
            }
            else if(sum+cmin*(n-i)<ans){
                Try(i+1,sum);
            }
            visited[j]=false;
            sum-=c[a[i-1]][a[i]];
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    a[1]=1;
    Try(2,0);
    cout << ans;
    return 0;
}