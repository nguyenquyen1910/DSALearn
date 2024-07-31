#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    vector<string> v;
    while(getline(cin,s)){
        if(s[0]=='s'){
            if(v.size()==0){
                cout << "empty\n";
            }
            else{
                for(auto x : v){
                    cout << x << " ";
                }
            }
            cout << endl;
        }
        else{
            if(s[1]=='u'){
                string k="";
                for(int i=5;i<s.size();i++){
                    k+=s[i];
                }
                v.push_back(k);
            }
            else v.pop_back();
        }
    }
    return 0;
}