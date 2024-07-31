#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n,k;cin>>n>>k;
    int a[n];
    ll cnt=0;
    for(int &x : a) cin>>x;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        auto it = lower_bound(a+i,a+n,a[i]+k)-a;
        cnt+=it-i-1;
    }
    cout << cnt;
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