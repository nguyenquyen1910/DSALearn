// Tìm số lớn nhất xuất hiện trong xâu
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
        if(!isdigit(s[i])){
            s[i]=' ';
        }
    }
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        string res="";
        int k=0;
        while(tmp[k]==0) ++k;
        if(k==tmp.size()){
            res+="0";
        }
        else{
            for(int i=k;i<tmp.size();i++){
                res+=tmp[i];
            }
        }
        v.push_back(res);
    }
    auto cmp=[](const string &a,const string &b){
        if(a.size()!=b.size()){
            return a.size()>b.size();
        }
        return a>b;
    };
    sort(v.begin(),v.end(),cmp);
    cout << v[0];
    return 0;
}