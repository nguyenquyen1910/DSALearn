#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> v;
vector<vector<int>> res;
void Try(int i,int key,vector<int> v){
    if(key==0){
        res.push_back(v);
        return;
    }
    for(int j=i;j>=1;j--){
        if(key>=j){
            v.push_back(j);
            Try(j,key-j,v);
            v.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        res.clear();
        v.clear();
        Try(n,n,v);
        cout << res.size() << endl;
        for(auto x : res){
            cout << "(";
            for(int i=0;i<x.size()-1;i++){
                cout << x[i] << " ";
            }
            cout << x[x.size()-1] << ")" << " ";
        }
        cout << endl;
    }
    return 0;
}