//Tìm số cặp có tổng lớn hớn k
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,k; cin>>n>>k;
    int a[n];
    for(int &x : a) cin>>x;
    ll ans=0;
    for(int i=0;i<n;i++){
        auto it = upper_bound(a+i+1,a+n,k-a[i]);
        ans+=(a+n)-it;
    }
    cout << ans;
    return 0;
}