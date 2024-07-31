#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool checkSquare(ll n){
    return ((ll)(sqrt(n)*sqrt(n))==n);
}
void testCase(){
    int n;cin>>n;
    ll a[n],l[n],r[n];
    for(int i=0;i<n;i++) cin>>a[i];
    stack<ll> st,st2;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]>=a[i]) st.pop();
        if(st.empty()) l[i]=0;
        else l[i]=st.top()+1;
        st.push(i);
    }
    for(int i=n-1;i>=0;i--){
        while(!st2.empty() && a[st2.top()]>=a[i]) st2.pop();
        if(st2.empty()) r[i]=n-1;
        else r[i]=st2.top()-1;
        st2.push(i);
    }
    ll res=0;
    for(int i=0;i<n;i++){
        if(r[i]-l[i]+1>=a[i]){
            res=max(res,a[i]);
        }
    }
    cout << res;
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