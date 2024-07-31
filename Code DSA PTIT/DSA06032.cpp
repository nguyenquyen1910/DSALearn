#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        ll a[n];
        for(ll &x : a) cin>>x;
        sort(a,a+n);
        ll res=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ll tmp=k-a[i]-a[j];
                auto it = lower_bound(a+j+1,a+n,tmp);
                res+=(it-a)-j-1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
