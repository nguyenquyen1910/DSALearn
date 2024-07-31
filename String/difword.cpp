// Liệt kê các từ khác nhau trong xâu
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    set<string> se;
    string tmp;
    stringstream ss(s);
    while(ss >> tmp){
        se.insert(tmp);
    }
    for(auto x : se){
        cout << x << " ";
    }
    return 0;
}