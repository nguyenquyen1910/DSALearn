//Đếm số lượng cặp số có tổng nhỏ hơn k
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int &x : a) cin>>x;
    sort(a,a+n);
    ll ans=0;
    for(int i=0;i<n;i++){
        auto it = lower_bound(a+i+1,a+n,k-a[i]);
        ans+=it-(a+i+1);
    }
    cout << ans;
    return 0;
}