#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n+1],m=INT_MIN,ans=0,s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=max(m,a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==m) ++s;
        else s=0;
        ans=max(ans,s);
    }
    cout << ans;
    return 0;
}