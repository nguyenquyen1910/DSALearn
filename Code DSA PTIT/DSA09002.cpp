#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,tmp;cin>>n;
    vector<pair<int,int>> v;
    cin.ignore();string s;
    for(int i=1;i<=n;i++){
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            if(i<stoi(tmp)){
                v.push_back({i,stoi(tmp)});
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto x : v){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}