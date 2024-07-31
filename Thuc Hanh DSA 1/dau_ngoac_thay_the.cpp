#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string solve(string s){
    stack<int> st;
    string res=s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(i);
        }
        else if(s[i]==')'){
            if(!st.empty()){
                int tmp=st.top();st.pop();
                res[tmp]='0';
                res[i]='1';
            }
            else{
                res[i]='#';
            }
        }
    }
    while(!st.empty()){
        res[st.top()]='#';
        st.pop();
    }
    for(int i=0;i<res.size();i++){
        if(res[i]=='#'){
            res.insert(i,"-");
            ++i;
        }
    }
    for(int i=0;i<res.size();i++){
        if(res[i]=='#'){
            res[i]='1';
        }
    }
    return res;
}
void testCase(){    
    string s;cin>>s;
    cout << solve(s);
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