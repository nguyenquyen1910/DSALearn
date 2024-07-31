#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
int n;
struct matrix{
    ll a[15][15];
    friend matrix operator * (matrix x,matrix y){
        matrix res;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                res.a[i][j]=0;
                for(int k=0;k<n;k++){
                    res.a[i][j]+=x.a[i][k]*y.a[k][j];
                    res.a[i][j]%=MOD;
                }
            }
        }
        return res;
    }
};
matrix powmod(matrix x,ll k){
    if(k==1) return x;
    matrix res=powmod(x,k/2);
    if(k%2==0) return res*res;
    else return res*res*x;
}
void testcase(){
    ll k;cin>>n>>k;
    matrix X;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>X.a[i][j];
        }
    }
    matrix Y = powmod(X,k);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << Y.a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
    }
    return 0;
}