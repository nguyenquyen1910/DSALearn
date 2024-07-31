#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string s(8,'0');
vector<string> v;
void solve(){
    int d=stoi(s.substr(0,2));
    int m=stoi(s.substr(2,2));
    int y=stoi(s.substr(4,4));
    if(d>=1 && d<=31 && m>=1 && m<=12 && y>=2000){
        string tmp="";
        tmp=to_string(d)+"/"+to_string(m)+"/"+to_string(y);
        if(tmp[1]=='/'){
            tmp="0"+tmp;
        }
        if(tmp[4]=='/'){
            tmp=tmp.insert(3,"0");
        }
        v.push_back(tmp);
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        if(j==0) s[i]='0';
        else s[i]='2';
        if(i==7) solve();
        else Try(i+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Try(0);
    sort(v.begin(),v.end());
    for(auto x : v){
        cout << x << endl;
    }
    return 0;
}