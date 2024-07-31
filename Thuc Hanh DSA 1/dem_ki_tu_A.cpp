#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,k,F[100],F2[100];
void Fibo(){
    F[0]=0;
    F[1]=1;
    for(int i=2;i<=92;i++){
        F[i]=F[i-1]+F[i-2];
    }
}
void init(){
    F2[0]=1;
    F2[1]=0;
    for(int i=2;i<=92;i++){
        F2[i]=F2[i-1]+F2[i-2];
    }
}
ll Find(ll n,ll k){
    if(n==0) return 1;
    if(n==1) return 0;
    if(k<=F[n]) return Find(n-1,k);
    else return F[n-2]+Find(n-2,k-F[n]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Fibo();
    init();
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        cout << Find(n,k) << endl;
    }
    return 0;
}