#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll x=0,b=0;
        for(int i=0;i<n;i++){
            x=x*10+a[i];++i;
            if(i!=n) b=b*10+a[i];
        }
        cout << 1ll*(x+b) << endl;
    }
    return 0;
}