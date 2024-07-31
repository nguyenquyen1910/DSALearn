#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<string> res;
unordered_map<string,bool> mp;
void Try(string s){
    stack<int> st;
    vector<pair<int,int>> vp;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            vp.push_back({st.top(),i});
            st.pop();
        }
    }
    if(vp.empty()){
        return;
    }
    string tmp;
    for(auto x : vp){
        tmp=s;
        tmp.erase(tmp.begin()+x.second);
        tmp.erase(tmp.begin()+x.first);
        if(!mp[tmp]){
            mp[tmp]=1;
            res.push_back(tmp);
            Try(tmp);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;cin>>s;
    Try(s);
    sort(res.begin(),res.end());
    for(auto x : res){
        cout << x << endl;
    }
    return 0;
}