#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
ll P[1001][1001];
void init(){
    for(int i=0;i<1001;i++){
        for(int j=0;j<1001;j++){
            if(i==0 || j==0){
                P[i][j]=1;
            }
            else P[i][j]=i*P[i-1][j-1]%MOD;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    int n,k;cin>>n>>k;
    cout << P[n][k];
    return 0;
}