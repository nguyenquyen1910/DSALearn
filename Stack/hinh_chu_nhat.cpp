#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    ll a[n],l[n],r[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<ll> st;st.push(-1);
    for(int i=0;i<n;i++){
        while(st.size()>1 && a[st.top()]>=a[i]) st.pop();
        l[i]=st.top()+1;
        st.push(i);
    }
    while(!st.empty()) st.pop();
    st.push(n);
    for(int i=n-1;i>=0;i--){
        while(st.size()>1 && a[st.top()]>=a[i]) st.pop();
        r[i]=st.top()-1;
        st.push(i);
    }
    ll res=0;
    for(int i=0;i<n;i++){
        res=max(res,(r[i]-l[i]+1)*a[i]);
    }
    cout << res;
    return 0;
}