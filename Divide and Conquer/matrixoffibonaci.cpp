#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
struct matrix{
    ll a[2][2];
    friend matrix operator * (matrix x, matrix y){
        matrix res;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                res.a[i][j]=0;
                for(int k=0;k<2;k++){
                    res.a[i][j]+=x.a[i][k]*y.a[k][j];
                    res.a[i][j]%=MOD;
                }
            }
        }
        return res;
    }
};
matrix powmod(matrix a, ll n){
    if(n==1) return a;
    matrix res=powmod(a,n/2);
    if(n%2==1) return res*res*a;
    else return res*res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;cin>>n;
    matrix X;
    X.a[0][0]=1;X.a[0][1]=1;X.a[1][0]=1;X.a[1][1]=0;
    matrix Y = powmod(X,n);
    cout << Y.a[0][1];
    return 0;
}