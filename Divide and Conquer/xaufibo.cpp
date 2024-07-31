#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll F[100];
void khtao(){
    F[1]=1;
    F[2]=1;
    for(int i=3;i<=92;i++){
        F[i]=F[i-1]+F[i-2];
    }
}
char findchar(int n,ll k){
    if(n==1) return 'A';
    if(n==2) return 'B'; 
    if(k<=F[n-2]) return findchar(n-2,k);
    else return findchar(n-1,k-F[n-2]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    khtao();
    int n;ll k;cin>>n>>k;
    cout << findchar(n,k);
    return 0;
}