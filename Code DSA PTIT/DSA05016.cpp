#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll U[100001];
void init(){
    ll i2=1,i3=1,i5=1;
    U[1]=1;
    for(int i=2;i<=10000;i++){
        U[i]=min({U[i2]*2,U[i3]*3,U[i5]*5});
        if(U[i]==U[i2]*2) ++i2;
        if(U[i]==U[i3]*3) ++i3;
        if(U[i]==U[i5]*5) ++i5;
    }
}
void testcase(){
    init();
    ll n;cin>>n;
    cout << U[n];
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