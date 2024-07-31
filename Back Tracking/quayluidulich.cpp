#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,c[100][100],ans=1e9;
bool visited[100];
int x[100];
void nhap(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
        }
    }
    memset(visited,false,sizeof(visited));
}
void Try(int i,int sum){
    //Duyen tu thanh pho thu 2 den thu n
    for(int j=2;j<=n;j++){
        if(visited[j]==false){
            visited[j]=true;
            x[i]=j;
            sum+=c[x[i-1]][x[i]];
            if(i==n){
                //Cap nhat chi phi ke ca khi di ve 1
                ans=min(ans,sum+=c[x[n]][x[1]]);
            }
            else Try(i+1,sum);
            visited[j]=false;
            sum-=c[x[i-1]][x[i]];
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    nhap();
    x[1]=1;
    Try(2,0);
    cout << ans;
    return 0;
}