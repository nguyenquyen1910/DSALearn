#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n,s,m;cin>>n>>s>>m;
    if((s-s/7)*n<s*m) cout << -1;
    else{
        for(int i=1;i<=s-s/7;i++){
            if(n*i>=s*m){
                cout << i;
                return;
            }
        }
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