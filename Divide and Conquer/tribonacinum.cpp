#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e15+7;
ll M[5] = {1,3,6,12,23};
struct matrix{
    ll a[4][4] = {
		{1,0,0,0},
		{0,1,1,0},
		{1,1,0,1},
		{0,1,0,0}};
    friend matrix operator * (matrix x, matrix y){
        matrix res;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                res.a[i][j]=0;
                for(int k=0;k<4;k++){
                    res.a[i][j]+=x.a[i][k]*y.a[k][j];
                    res.a[i][j]%=MOD;
                }
            }
        }
        return res;
    }
};
matrix powmod(matrix a,ll k){
    if(k==1) return a;
    matrix res=powmod(a,k/2);
    if(k%2==1) return res*res*a;
    else return res*res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    if(n<=5)  cout << M[n-1];
    else{
        matrix x;
        matrix res=powmod(x,n+2);
        cout << res.a[2][0]-1;
    }
    return 0;
}