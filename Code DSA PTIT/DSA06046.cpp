#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int res=INT_MAX;
        for(int i=0;i<n-1;i++){
            res=min(res,a[i+1]-a[i]);
        }
        cout << res << endl;
    }
    return 0;
}