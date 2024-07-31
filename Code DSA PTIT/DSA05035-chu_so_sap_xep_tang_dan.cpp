#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
ll dp[101],a[11];
void init(){
    for(int i=1;i<=10;i++){
        a[i]=1;
    }
    dp[1]=10;
    for(int i=2;i<=100;i++){
        for(int j=1;j<=9;j++){
            ll s=0;
            for(int k=j;k<=9;k++){
                s+=a[k];
            }
            a[j]=s;
            dp[i]=(dp[i]+s)%MOD;
        }
    }
    for(int i=2;i<=100;i++){
        dp[i]=(dp[i]+dp[i-1])%MOD;
    }
}
void testcase(){
    int n;cin>>n;
    cout << dp[n];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}