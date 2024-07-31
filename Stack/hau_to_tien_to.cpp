#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;cin>>s;
    stack<string> st;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[i])){
            st.push(string(1,s[i]));
        }
        else{
            string s1=st.top();st.pop();
            string s2=st.top();st.pop();
            string tmp=s[i]+s2+s1;
            st.push(tmp);
        }
    }
    cout << st.top();
    return 0;
}