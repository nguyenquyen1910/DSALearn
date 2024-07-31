#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int solve(int a,int b,char x){
    if(x=='+') return a+b;
    else if(x=='-') return a-b;
    else if(x=='*') return a*b;
    else if(x=='/') return a/b;
}
void testCase(){
    string s;cin>>s;
    stack<int> st;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            int a=st.top();st.pop();
            int b=st.top();st.pop();
            int res=solve(a,b,s[i]);
            st.push(res);
        }
        else st.push(s[i]-'0');
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