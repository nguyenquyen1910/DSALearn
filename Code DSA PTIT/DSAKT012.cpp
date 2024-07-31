#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        cnt+=(k/a[i]);
        k%=a[i];
    }
    cout << cnt;
    return 0;
}