#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    string s;cin>>s;
    stack<char> st;
    int o=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            o++;
            st.push(s[i]);
        }
        else{
            if(!st.empty() && st.top()=='('){
                o--;
                st.pop();
            }
            else{
                c++;
                st.push(s[i]);
            }
        }
    }
    int res=o/2+c/2;
    res+=o%2+c%2;
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