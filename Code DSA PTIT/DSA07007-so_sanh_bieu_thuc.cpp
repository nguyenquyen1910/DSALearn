#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string solve(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=')'){
            st.push(s[i]);
        }
        else{
            string tmp="";
            while(st.top()!='('){
                tmp=st.top()+tmp;
                st.pop();
            }
            st.pop();
            if(!st.empty() && st.top()=='-'){
                for(auto x : tmp){
                    if(x=='-') x='+';
                    else if(x=='+') x='-';
                    st.push(x);
                }
            }
            else{
                for(auto x : tmp){
                    st.push(x);
                }
            }
        }
    }
    string res="";
    while(!st.empty()){
        res=st.top()+res;
        st.pop();
    }   
    return res;
}
void testCase(){
    string s1,s2;cin>>s1>>s2;
    cout << (solve(s1) == solve(s2) ? "YES" : "NO");
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