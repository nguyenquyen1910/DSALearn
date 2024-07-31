#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool isSign(char s){
    return (s=='+'|| s=='-' || s=='*' || s=='/');
}
void testCase(){
    string s;cin>>s;
    stack<string> st;
    for(int i=0;i<s.size();i++){
        if(isSign(s[i])){
            string top1=st.top();st.pop();
            string top2=st.top();st.pop();
            st.push(top2+s[i]+top1);
        }
        else st.push(string(1,s[i]));
    }
    cout << st.top();
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