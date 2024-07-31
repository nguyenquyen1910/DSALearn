#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    string s;cin>>s;
    stack<int> st;
    for(int i=0;i<=s.size();i++){
        st.push(i+1);
        if(i==s.size() || s[i]=='I'){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
        }
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