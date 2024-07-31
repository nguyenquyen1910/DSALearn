#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    auto it = lower_bound(a,a+n,1)-a;
    cout << it;
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