//Chia mảng thành k mảng con liên tiếp sao cho tổng lớn nhất của một mảng con là càng nhỏ càng tốt
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[200005];
bool check(ll x){
    //x: là tổng lớn nhất mà mảng con có thể có
    int dem=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>x){
            ++dem;
            sum=a[i];
        }
    }
    ++dem;//dãy con cuối cùng
    return dem<=k;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    ll left=*max_element(a,a+n);//Giá trị tối thiểu mà tổng các mảng con vượt qua
    ll right=accumulate(a,a+n,0ll);//Giá trị tối đa mà tổng mảng con có thể chạm đến <=> tổng tất cả các phần tử
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