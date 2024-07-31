#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;cin>>s;
    int q;cin>>q;
    while(q--){
        char x;cin>>x;
        if(x=='q'){
            int l,r;cin>>l>>r;
            string tmp=s;
            reverse(tmp.begin()+l-1,tmp.begin()+r);
            if(tmp==s) cout << "YES\n";
            else cout << "NO\n";
        }
        else{
            int u;cin>>u;
            char c;cin>>c;
            s[u-1]=c;
        }
    }
    return 0;
}