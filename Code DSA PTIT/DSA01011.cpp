#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int tc;cin>>tc;
        string s;cin>>s;
        cout << i << " ";
        if(next_permutation(s.begin(),s.end())){
            cout << s << endl;
        }
        else cout << "BIGGEST\n";
    }
    return 0;
}