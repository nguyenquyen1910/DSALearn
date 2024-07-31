// Cho n sợi dây, cắt n sợi thành k đoạn có cùng chiều dài tìm chiều dài lớn nhất dây có thể đạt được
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[1000001];
bool check(double length){
    ll cnt=0;
    for(int i=0;i<n;i++){
        cnt+=(ll)a[i]/length;
    }
    return cnt>=k;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    double left=0,right=4*1e18,res;
    for(int i=1;i<=100;i++){
        double mid=(left+right)/2;
        if(check(mid)){
            res=mid;
            left=mid;
        }
        else right=mid;
    }
    cout << fixed << setprecision(6) <<  res;
    return 0;
}