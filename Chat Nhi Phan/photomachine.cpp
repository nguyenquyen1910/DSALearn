// Có n bản sao cần photo, có 2 máy máy 1 mấy x(s) để xong, máy 2 cần y(s) để xong
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,x,y;
bool check(ll time){
    time-=min(x,y);
    return time/x+time/y>=n-1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>x>>y;
    ll left=0;
    ll right=1ll*min(x,y)*n;
    ll res;
    while(left<=right){
        ll mid=(left+right)/2;
        if(check(mid)){ 
            res=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    cout << res;
    return 0;
}
