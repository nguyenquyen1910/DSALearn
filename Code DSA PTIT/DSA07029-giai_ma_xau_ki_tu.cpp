#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    string s;cin>>s;
    stack<int> st1;
    stack<string> st2;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            int x=0;
            while(i<s.size() && isdigit(s[i])){
                x=x*10+s[i]-'0';
                ++i;
            }
            --i;
            st1.push(x);
        }
        else if(s[i]==']'){
            string tmp="";
            while(st2.top()!="["){
                tmp=st2.top()+tmp;
                st2.pop();
            }
            st2.pop();
            string res="";
            int cnt=st1.top();st1.pop();
            while(cnt--) res+=tmp;
            st2.push(res);
        }
        else{
            st2.push(string(1,s[i]));
            if(s[i]=='[' && (i==0 || s[i-1]<'0' || s[i-1]>'9'))
                st1.push(1);
        }
    }
    string ans="";
    while(!st2.empty()){
        ans=st2.top()+ans;
        st2.pop();
    }
    cout << ans;
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