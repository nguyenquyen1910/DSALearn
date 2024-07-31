#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    string s=s1+" + "+s2;
    vector<string> thuaso;
    string tmp;
    stringstream ss(s1);
    map<int,int> mp;
    while(ss >> tmp){
        thuaso.push_back(tmp);
    }
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