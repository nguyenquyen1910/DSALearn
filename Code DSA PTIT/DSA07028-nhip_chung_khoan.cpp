#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    int a[n];
    stack<int> st;st.push(0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        while(st.size()>1 && a[st.top()]<=a[i]){
            st.pop();
        }
        cout << i-st.top() << " ";
        st.push(i);
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