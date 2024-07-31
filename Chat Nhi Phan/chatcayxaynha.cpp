/*Cho 1 mảng tượng trưng cho chiều cao của các cây, 
cắt tất cả các cây ở 1 mốc cố định và phải cắt ở đâu để có tổng thu được bằng k*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[1000001];
bool check(ll x){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=(a[i]-x);
    }
    return sum>=k;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    ll left=0,right=*max_element(a,a+n);
    ll res;
    while(left<=right){
        ll mid=(left+right)/2;
        if(check(mid)){
            res=mid;
            left=mid+1;
        }
        else right=mid-1;
    }
    cout << res;
    return 0;
}