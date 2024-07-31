#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(string a,string b){
    int key=0;
    for(int i=0;i<b.size();i++){
        if(a[key]==b[i]) ++key;
    }
    return key==a.size();
}
void testcase(){
    ll n;cin>>n;
    ll m=cbrt(n);
    for(int i=m;i>=1;i--){
        ll o=pow(i,3);
        if(check(to_string(o),to_string(n))){
            cout << o;
            return;
        }
    }
    cout << -1;
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