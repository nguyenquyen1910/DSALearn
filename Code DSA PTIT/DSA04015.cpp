#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;ll x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    auto it = upper_bound(a.begin(),a.end(),x)-a.begin();
    if(it>0) cout << it;
    else cout << -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}