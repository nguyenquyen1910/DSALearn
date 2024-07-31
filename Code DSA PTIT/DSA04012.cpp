#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n,m;cin>>n>>m;
    int a[n+5],b[m+5],dp[n+m-1]={};
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i+j]+=a[i]*b[j];
        }
    }
    for(int &x : dp){
        cout << x << " ";
    }
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