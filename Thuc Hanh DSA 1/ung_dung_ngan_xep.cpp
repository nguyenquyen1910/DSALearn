#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,ans=0;
    cin>>n;
    map<int,int> mp;
    stack<int> st;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        while(!st.empty() && x>st.top()){
            mp[st.top()]--;
            st.pop();
            ans++;
        }
        if(!st.empty()){
            if(x==st.top()){
                ans+=mp[x]+(st.size()>mp[x]);
            }
            else ans+=1;
        }
        st.push(x);
        mp[x]++;
    }
    cout << ans;
    return 0;
}