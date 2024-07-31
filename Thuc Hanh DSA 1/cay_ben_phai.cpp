#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<string> v;
void RNL(int i){
    if(i>=v.size()) return;
    RNL(2*i+2);
    if(v[i]!="N") cout << v[i] << " ";
    RNL(2*i+1);
}
void testCase(){
    string s;getline(cin,s);
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    RNL(0);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    cin.ignore();
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}