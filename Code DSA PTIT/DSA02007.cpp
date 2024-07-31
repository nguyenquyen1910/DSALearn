#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int k;
        string s;
        cin>>k>>s;
        for(int i=0;i<s.size();i++){
            char charMax = s[s.size()-1];
            int pos=s.size()-1;
            for(int j=s.size()-1;j>i && k>0;j--){
                if(charMax<s[j]){
                    charMax=s[j];
                    pos=j;
                }
            }
            if(charMax>s[i] && k>0){
                swap(s[i],s[pos]);
                --k;
            }
        }
        cout << s << endl;
    }
    return 0;
}