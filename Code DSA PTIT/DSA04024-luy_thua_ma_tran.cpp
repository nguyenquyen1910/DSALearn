#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
int n;
struct matrix{
    ll a[15][15];
    friend matrix operator * (matrix x, matrix y){
        matrix res;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                res.a[i][j]=0;
                for(int k=1;k<=n;k++){
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
    if(k%2==1) return (res*res*a);
    else return (res*res);
}
void testcase(){
    ll k;cin>>n>>k;
    matrix X;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>X.a[i][j];
        }
    }
    matrix Y = powmod(X,k);
    ll res=0;
    for(int i=1;i<=n;i++){
        res+=Y.a[i][n];
        res%=MOD;
    }
    cout << res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}

