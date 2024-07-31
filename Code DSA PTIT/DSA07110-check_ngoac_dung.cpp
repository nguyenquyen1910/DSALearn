#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(string s){
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if(s[i]==')' && !st.empty() && st.top()=='(') st.pop();
        else if(s[i]==']' && !st.empty() && st.top()=='[') st.pop();
        else if(s[i]=='}' && !st.empty() && st.top()=='{') st.pop();
        else st.push(s[i]);
    }
    return st.empty();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(check(s)) cout << "true\n";
        else cout << "false\n";
    }
    return 0;
}