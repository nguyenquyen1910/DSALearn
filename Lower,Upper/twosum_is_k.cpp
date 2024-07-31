//Tìm cặp số có tổng là k
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int &x : a) cin>>x;
    sort(a,a+n);
    long long cnt=0;
    for(int i=0;i<n;i++){
        auto pos1=lower_bound(a+i+1,a+n,k-a[i]);
        auto pos2=upper_bound(a+i+1,a+n,k-a[i]);
        cnt+=pos2-pos1;
    }
    cout << cnt;
    return 0;
}