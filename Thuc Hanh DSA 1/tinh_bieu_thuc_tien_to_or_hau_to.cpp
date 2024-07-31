#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool isOperator(string x){
    return (x=="+" || x=="-" || x=="*" || x=="/");
}
long long solve(long long a, long long b, string op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") return a / b;
    return 0;
}
ll suffixesSolve(vector<string> v){
    stack<ll> st;
    for(int i=0;i<v.size();i++){
        if(isOperator(v[i])){
            ll a=st.top();st.pop();
            ll b=st.top();st.pop();
            ll res=solve(b,a,v[i]);
            st.push(res);
        }
        else{
            st.push(stoll(v[i]));
        }
    }   
    return st.top(); 
}
ll prefixSolve(vector<string> v){
    stack<ll> st;
    for(int i=v.size()-1;i>=0;i--){
        if(isOperator(v[i])){
            ll a=st.top();st.pop();
            ll b=st.top();st.pop();
            ll res=solve(a,b,v[i]);
            st.push(res);
        }
        else{
            st.push(stoll(v[i]));
        }
    }   
    return st.top(); 
}
void testCase(){
    int n;cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(isOperator(v[v.size()-1])){
        cout << suffixesSolve(v);
    }
    else cout << prefixSolve(v);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    cin.ignore();
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}