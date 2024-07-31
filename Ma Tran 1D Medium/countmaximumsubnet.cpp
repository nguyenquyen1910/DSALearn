// Tìm số lượng cặp phần tử lớn nhất sao cho chênh lệch không vượt quá k
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int &x : a) cin>>x;
    sort(a,a+n);
    int cnt=1,ans=1;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]<=k){
            cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=1;
        }
        if(i==n-1){
            ans=max(ans,cnt);
        }
    }
    cout << ans;
    return 0;
}