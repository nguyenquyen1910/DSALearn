#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        map<char,int> mp;
        int fre=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            fre=max(fre,mp[s[i]]);
        }
        if(fre<=(s.size()+1)/2) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}