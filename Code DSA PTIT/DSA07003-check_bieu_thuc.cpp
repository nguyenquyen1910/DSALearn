#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    string s;getline(cin,s);
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=')'){
            st.push(s[i]);
        }
        else{
            bool check=false;
            while(!st.empty()){
                char c=st.top();st.pop();
                if(c=='+' || c=='-' || c=='*' || c=='/'){
                    check=true;
                }
                if(c=='(') break;
            }
            if(!check){
                cout << "Yes";
                return;
            }
        }
    }
    cout << "No";
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