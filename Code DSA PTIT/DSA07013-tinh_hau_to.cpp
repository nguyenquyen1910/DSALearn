#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int solve(int a,int b,char x){
    if(x=='+') return a+b;
    else if(x=='-') return a-b;
    else if(x=='*') return a*b;
    else if(x=='/') return a/b;
}
void testCase() {
    string s; cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int y = st.top(); st.pop();
            int x = st.top(); st.pop();
            int z = solve(x, y, s[i]);
            st.push(z);
        }
        else st.push(s[i] - '0');
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