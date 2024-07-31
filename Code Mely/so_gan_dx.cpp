#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(string s){
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        ++l;--r;
    }
    return true;
}
void testcase(){
    string s;cin>>s;
    if(check(s)) cout << "YES";
    else{
        while(s.size()<=10){
            s="0"+s;
            if(check(s)){
                cout << "YES";
                return;
            }
        }
        cout << "NO";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    testcase();
    return 0;
}