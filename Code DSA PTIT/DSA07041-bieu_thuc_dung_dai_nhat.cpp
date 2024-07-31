#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    string s;cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]==')' && !st.empty() && st.top()=='('){
            st.pop();
        }
        else st.push(s[i]);
    }
    cout << s.size()-st.size();
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