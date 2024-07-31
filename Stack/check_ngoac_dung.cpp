#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;cin>>s;
    if(check(s)) cout << "YES";
    else cout << "NO";
    return 0;
}