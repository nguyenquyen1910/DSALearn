#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    string s;cin>>s;
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
            st.pop();// Xoa dau mo ngoac
            if(!st.empty() && st.top() == '-') {
                for(char &j : tmp) {
                    if(j=='-')
                        j='+';
                    else if(j=='+') 
                        j = '-';
                }
            }
            for(auto x : tmp){
                st.push(x);
            }
        }
    }
    string res="";
    while(!st.empty()){
        res=st.top()+res;
        st.pop();
    }
    cout << res;
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