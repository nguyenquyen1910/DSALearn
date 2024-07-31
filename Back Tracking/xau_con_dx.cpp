//Cho một chuỗi s, phân vùng s sao cho mọi chuỗi con của phân vùng là một xuôi ngược đều giống nhau.Trả về tất cả các phân vùng palindrome có thể có của s.
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
vector<vector<string>> res;
bool check(string s,int l,int r){
    while(l<r){
        if(s[l++]!=s[r--]) return false;
    }
    return true;
}
void Try(int begin,string &s,vector<string> &tmp){
    if(begin==s.size()){
        res.push_back(tmp);
        return;
    }
    for(int j=begin;j<s.size();j++){
        if(check(s,begin,j)){
            tmp.push_back(s.substr(begin,j-begin+1));
            Try(j+1,s,tmp);
            tmp.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>s;vector<string> tmp;
    Try(0,s,tmp);
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
    }
    return 0;
}