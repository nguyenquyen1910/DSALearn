//Tìm thời gian ngắn nhất để sản xuất được t sản phẩm cần thiết
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,t,a[200001];
bool check(ll x){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=(x/a[i]);
    }
    return sum>=t;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>t;
    for(int i=0;i<n;i++) cin>>a[i];
    ll left=0,right=1ll*t**min_element(a,a+n);
    ll res;
    while(left <= right){
        ll mid = (left+right)/2;
        if(check(mid)){
            res=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    cout << res;
    return 0;
}