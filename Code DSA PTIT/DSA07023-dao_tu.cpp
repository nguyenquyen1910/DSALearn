#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    string s;getline(cin,s);
    stringstream ss(s);
    stack<string> st;
    while(ss >> s){
        st.push(s);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    cin.ignore();
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}