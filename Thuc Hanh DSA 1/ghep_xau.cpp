#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Try(int i,vector<string> v,string cur,set<string> &res){
    for(int j=0;j<v.size();j++){
        cur+=v[j];
        res.insert(cur);
        Try(j+1,v,cur,res);
        cur.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<string> res;
    Try(0,v,"",res);
    for(auto x : res){
        cout << x << endl;  
    }
    return 0;
}