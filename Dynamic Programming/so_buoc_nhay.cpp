/* Cho mang a co n phan tu, ban đầu bạn ở vị trí 0, bạn có thể nhảy về phía trước, với mỗi a[i] đại diện cho số buóc bạn
có thể nhảy được, tìm số bước nhảy tối thiểu để đến được a[n-1] */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        a[i]=max(a[i]+i,a[i-1]);
    }
    int ans=0,cnt=0;
    while(cnt<n-1){
        ans++;
        cnt=a[cnt];
    }
    cout << ans;
    return 0;
}