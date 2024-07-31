#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int find(int n,ll k){
    if(k==(ll)pow(2,n-1))
        return n;
    if(k<(ll)pow(2,n-1))
        return find(n-1,k);
    else return find(n-1,k-(ll)pow(2,n-1));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;ll k;cin>>n>>k;
        cout << find(n,k) << endl;
    }
    return 0;
}