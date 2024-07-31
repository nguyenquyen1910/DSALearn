#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> res;
    int v[100];
    for(int i=0;i<n;i++){
        v[i]=i;
    }
    while(next_permutation(v,v+n)){
        vector<int> tmp;
        for(int i=0;i<n;i++){
            tmp.push_back(a[v[i]]);
        }
        res.push_back(tmp);
    }
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}