#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    int a[n],idx[n],r[n];
    stack<int> st;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=n;i>=1;i--){
        while(!st.empty() && a[st.top()]<=a[i]) st.pop();
        if(st.empty()) idx[i]=-1;
        else idx[i]=st.top();
        st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i=n;i>=1;i--){
        while(!st.empty() && st.top()>=a[i]) st.pop();
        if(st.empty()) r[i]=-1;
        else r[i]=st.top();
        st.push(a[i]);
    }
    for(int i=1;i<=n;i++){
        if(idx[i]==-1) cout << -1;
        else cout << r[idx[i]];
        cout << " ";
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