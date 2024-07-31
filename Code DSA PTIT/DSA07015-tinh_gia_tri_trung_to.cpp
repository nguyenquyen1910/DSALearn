#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int uutien(char c){
    if(c=='*' || c=='/') return 2;
    if(c=='+' || c=='-') return 1;
    return 0;
}
ll solve(ll a,ll b,char c){
    if(c=='+') return a+b;
    if(c=='-') return a-b;
    if(c=='*') return a*b;
    if(c=='/') return a/b;
    return 0;
}
void testCase(){
    string s;cin>>s;
    stack<ll> num;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') op.push(s[i]);
        else if(isdigit(s[i])){
            ll val1=0;
            while(isdigit(s[i])){
                val1=val1*10+(s[i]-'0');
                ++i;
            }
            --i;
            num.push(val1);
        }
        else if(s[i]==')'){
            while(!op.empty() && op.top()!='('){
                ll val2=num.top();num.pop();
                ll val3=num.top();num.pop();
                num.push(solve(val3,val2,op.top()));
                op.pop();            
            }
            if(!op.empty()) op.pop();
        }
        else{
            while(!op.empty() && uutien(op.top())>=uutien(s[i])){
                ll val2=num.top();num.pop();
                ll val3=num.top();num.pop();
                num.push(solve(val3,val2,op.top()));
                op.pop();
            }
            op.push(s[i]);
        }
    }
    while(!op.empty()){
        ll val2=num.top();num.pop();
        ll val3=num.top();num.pop();
        num.push(solve(val3,val2,op.top()));
        op.pop();
    }
    cout << num.top();
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