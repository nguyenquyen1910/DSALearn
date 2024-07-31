#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,V;cin>>n>>V;
    int w[n],v[n];
    for(int i=1;i<=n;i++) cin>>w[i];
    for(int i=1;i<=n;i++) cin>>v[i];
    int F[n+1][V+1];
    memset(F,0,sizeof(F));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=V;j++){
            F[i][j]=F[i-1][j];
            if(j>=w[i]) F[i][j]=max(F[i][j],F[i-1][j-w[i]]+v[i]);
        }
    }
    cout << F[n][V];
    return 0;
}