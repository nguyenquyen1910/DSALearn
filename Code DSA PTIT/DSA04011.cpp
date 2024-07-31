#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    string a,b;cin>>a>>b;
    ll x=0,y=0;
    for(int i=a.size()-1;i>=0;i--){
        x+=(a[i]-'0')*pow(2,a.size()-i-1);
    }
    for(int i=b.size()-1;i>=0;i--){
        y+=(b[i]-'0')*pow(2,b.size()-i-1);
    }
    cout << (ll)(x*y);
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