#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    ll sum=0;
    for(int i=0;i<n;i++){
        int maxvalue=0;
        for(int j=i;j<n;j++){
            maxvalue=max(maxvalue,a[j]);
            sum+=maxvalue;
        }
    }
    cout << sum;
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