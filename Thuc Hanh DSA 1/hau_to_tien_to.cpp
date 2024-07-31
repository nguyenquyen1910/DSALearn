#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool isOperator(string x){
    return (x=="+" || x=="-" || x=="*" || x=="/");
}
ll solve(ll a,ll b,string x){
    if(x=="+") return a+b;
    else if(x=="-") return a-b;
    else if(x=="*") return a*b;
    else if(x=="/") return a/b;
    return 0;
}
void testCase(){
    int n;cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(!isOperator(v[n-1])){
        stack<ll> st;
        for(int i=n-1;i>=0;i--){
            if(!isOperator(v[i])){
                st.push(stoll(v[i]));
            }
            else{
                ll a=st.top();st.pop();
                ll b=st.top();st.pop();
                ll res=solve(a,b,v[i]);
                st.push(res);
            }
        }
        cout << st.top();
    }
    else{
        stack<ll> st;
        for(int i=0;i<n;i++){
            if(!isOperator(v[i])){
                st.push(stoll(v[i]));
            }
            else{
                ll a=st.top();st.pop();
                ll b=st.top();st.pop();
                ll res=solve(b,a,v[i]);
                st.push(res);
            }
        }
        cout << st.top();
    }
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