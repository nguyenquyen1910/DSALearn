#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    string s;cin>>s;
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--){
        if(isalpha(s[i])){
            st.push(string(1,s[i]));
        }
        else{
            string s1=st.top();st.pop();
            string s2=st.top();st.pop();
            st.push(s1+s2+s[i]);
        }
    }
    cout << st.top();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}