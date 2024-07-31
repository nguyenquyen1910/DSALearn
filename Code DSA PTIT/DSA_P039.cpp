#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100][100],dp[100][100];
void testcase(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }   
    for(int i=1;i<=n;i++) dp[i][1]=a[i][1];
    for(int i=1;i<=n;i++){
        for(int j=2;j<=n;j++){
            
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
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