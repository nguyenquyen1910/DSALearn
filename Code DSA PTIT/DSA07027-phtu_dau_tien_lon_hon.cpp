#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    int a[n],res[n];
    for(int i=0;i<n;i++) cin>>a[i];
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && a[i]>=st.top()){
            st.pop();
        }
        if(st.empty()) res[i]=-1;
        else res[i]=st.top();
        st.push(a[i]);
    }
    for(auto x : res){
        cout << x << " ";
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