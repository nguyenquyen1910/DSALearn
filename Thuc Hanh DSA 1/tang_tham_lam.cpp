#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<ll> a(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<ll>> res;
    list<vector<ll>> sequences;
    for (int num : a) {
        bool check = false;
        for (auto& seq : sequences) {
            if (seq.empty() || seq.back() < num) {
                seq.push_back(num);
                check = true;
                break;
            }
        }
        if (!check) {
            sequences.push_back({num});
        }
    }
    for(auto x : sequences){
        vector<ll> tmp;
        for(auto y : x){
            tmp.push_back(y);
        }
        res.push_back(tmp);
    }
    cout << res.size()-1 << endl;
    for(int i=0;i<res.size()-1;i++){
        for(auto y : res[i]){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}