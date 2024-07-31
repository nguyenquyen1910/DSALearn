#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll F[100];
void init(){
    F[1]=1;
    F[2]=1;
    for(int i=2;i<=92;i++){
        F[i]=F[i-1]+F[i-2];
    }
}
char find(int n,ll k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k<=F[n-2]) return find(n-2,k);
    else return find(n-1,k-F[n-2]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    int t;cin>>t;
    while(t--){
        int n;ll k;cin>>n>>k;
        cout << find(n,k) << endl;
    }
    return 0;
}