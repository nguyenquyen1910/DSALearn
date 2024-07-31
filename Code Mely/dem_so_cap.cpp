#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n,x;cin>>n>>x;
    ll a[n+1];
    ll cnt=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        ll tmp=a[i]*a[i];
        for(int j=i+1;j<n;j++){
            if(a[j]==(ll)x-tmp) cnt++;
        }
    }
    cout << cnt;
    return 0;
}