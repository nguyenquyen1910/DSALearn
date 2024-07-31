// Xếp n thanh domino có kích thước a*b vào hình vuông có cạnh nhỏ nhất(tìm cạnh đó)
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a,b;
bool check(ll side){
    return 1ll*(side/a)*(side/b)>=n;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>a>>b;
    ll left=0;
    ll right=n*max(a,b);
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