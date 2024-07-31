#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,k,F[100];
void fibo(){
    F[0]=0;F[1]=0;
    for(int i=2;i<=92;i++){
        F[i]=F[i-1]+F[i-2];
    }
}
ll Find(ll n,ll k){
    if(n<2) return n;
    if(k<=F[n]) return Find(n-1,k);
    else return F[n-1]+Find(n-2,k-F[n]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    fibo();
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        cout << Find(n,k) << endl;
    }
    return 0;
}