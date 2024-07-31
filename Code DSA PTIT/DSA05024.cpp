#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;
void testcase(){
    int n,s;cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll F[s+1];memset(F,0,sizeof(F));
    F[0]=1;
    for(int i=1;i<=s;i++){
        for(int j=0;j<n;j++){
            if(i>=a[j]){
                F[i]+=F[i-a[j]];
                F[i]%=MOD;
            }
        }
    }
    cout << F[s];
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