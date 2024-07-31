#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;cin>>s;
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--){
        if(isalpha(s[i])){
            st.push(string(1,s[i]));
        }
        else{
            string ch1=st.top();st.pop();
            string ch2=st.top();st.pop();
            string tmp="(" + ch1 + s[i] + ch2 + ")";
            st.push(tmp);
        }
    }
    cout << st.top();
    return 0;
}