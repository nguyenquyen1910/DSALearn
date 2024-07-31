#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    queue<ll> q;
    q.push(1);
    while(!q.empty()){
        ll x=q.front();q.pop();
        if(x%n==0){
            cout << x;
            return;
        }
        q.push(x*10);
        q.push(x*10+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}