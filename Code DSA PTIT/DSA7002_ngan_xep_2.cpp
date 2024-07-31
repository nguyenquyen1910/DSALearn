#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,x;cin>>n;
    stack<int> st;
    string s;
    while(n--){
        cin>>s;
        if(s=="PUSH"){
            cin>>x;
            st.push(x);
        }
        else if(s=="POP"){
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            if(st.empty()){
                cout << "NONE";
            }
            else{
                cout << st.top();
            }
            cout << endl;
        }
    }
    return 0;
}