#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    string s;cin>>s;
    stack<int> st;
    char sign='+';int num=0;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) num=num*10+s[i]-'0';
        if(!isdigit(s[i]) || i==s.size()-1){
            if(sign=='+') st.push(num);
            else if(sign=='-') st.push(-num);
            else{
                int tmp;
                if(sign=='*'){
                    tmp=st.top()*num;
                    st.pop();
                }
                else{
                    tmp=st.top()/num;
                    st.pop();
                }
                st.push(tmp);
            }
            sign=s[i];
            num=0;
        }
    }
    int res=0;
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    cout << res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    testCase();
    return 0;
}