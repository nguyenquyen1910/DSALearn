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
        int i=s.size()-1;
        while(i>=0 && s[i]=='0'){
            s[i]='1';
            --i;
        }
        if(i>=0) s[i]='0';
        cout << s << endl;
    }
    return 0;
}