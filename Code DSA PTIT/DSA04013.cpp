#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int res=n;
    sort(a,a+n);
    int l=n/2-1,r=n-1;
    while(l>=0){
        if(a[r]>=2*a[l]){
            res--;
            l--;r--;
        }
        else l--;
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