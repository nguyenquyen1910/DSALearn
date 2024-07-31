//Cho 2 string s,t .Tim so day con neu thay 1 ki tu cua xau s se duoc 1 xau con cua t
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s,t;cin>>s>>t;
    int n=s.size(),m=t.size();
    int same[101][101],dif[101][101];
    memset(same,0,sizeof(same));
    memset(dif,0,sizeof(dif));
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){
                same[i][j]=same[i-1][j-1]+1;
                dif[i][j]=dif[i-1][j-1];
            }
            else{   
                dif[i][j]=same[i-1][j-1]+1;
            }
            ans+=dif[i][j];
        }
    }
    cout << ans;
    return 0;
}