#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
struct matrix{
    ll x[2][2];
    friend matrix operator * (matrix a, matrix b){
        matrix res;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                res.x[i][j]=0;
                for(int k=0;k<2;k++){
                    res.x[i][j]+=a.x[i][k]*b.x[k][j];
                    res.x[i][j]%=MOD;
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
void testcase(){
    ll n;cin>>n;
    matrix X;
    X.x[0][0]=1;X.x[0][1]=1;X.x[1][0]=1;X.x[1][1]=0;
    matrix Y = powmod(X,n);
    cout << Y.x[0][1];
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