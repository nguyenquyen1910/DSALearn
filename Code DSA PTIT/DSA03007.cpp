#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    int a[n],b[n];
    for(int &x : a) cin>>x;
    for(int &x : b) cin>>x;
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    ll res=0;
    for(int i=0;i<n;i++){
        res+=a[i]*b[i];
    }
    cout << res;
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