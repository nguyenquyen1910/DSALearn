#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(vector<char> a,int n){
    string tmp="28tech";
    for(int i=n-1;i>=0;i--){
        if(a[i]==tmp.back()){
            tmp.pop_back();
        }
    }
    return tmp.empty();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<char> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(check(a,n)){
        cout << "28TECH";
    }
    else cout << "HCET82";
    return 0;
}