#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
int n;
ll k;
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
matrix powmod(matrix a,ll k){
    if(k==1) return a;
    matrix res=powmod(a,k/2);
    if(k%2==1) return res*res*a;
    else return res*res;
} 
void testcase(){
    cin>>n>>k;
        matrix x;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>x.a[i][j];
            }
        }
        matrix y = powmod(x,k);
        ll sum=0;
        for(int i=0;i<n;i++){
            sum+=y.a[0][i];
            sum%=MOD;
        }
        cout << sum;
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