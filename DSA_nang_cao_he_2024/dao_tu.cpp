#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    string s;getline(cin,s);
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
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