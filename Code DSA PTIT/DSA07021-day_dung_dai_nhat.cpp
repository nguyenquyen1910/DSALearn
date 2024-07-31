#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int countchar(string s){
    stack<int> st;
    st.push(-1);
    int res=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(i);
        }
        else{
            st.pop();
            if(!st.empty()){
                res=max(res,i-st.top());
            }
            else st.push(i);
        }
    }
    return res;
}
void testcase(){
    string s;cin>>s;
    cout << countchar(s);
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