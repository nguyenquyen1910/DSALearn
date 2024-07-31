#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
ll C[1001][1001];
void ktao(){
    for(int i=0;i<1001;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j){
                C[i][j]=1;
            }
            else C[i][j]=C[i-1][j-1]+C[i-1][j]%MOD;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ktao();
    for(int i=0;i<11;i++){
        for(int j=0;j<=i;j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}