#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[100];
vector<string> v;
vector<vector<string>> res;
void solve(){
    vector<string> tmp;
    for(int i=1;i<=k;i++){
        tmp.push_back(v[a[i]]);
    }
    sort(tmp.begin(),tmp.end());
    res.push_back(tmp);
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) solve();
        else Try(i+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    set<string> se;
    for(int i=1;i<=n;i++){
        string x;cin>>x;
        se.insert(x);
    }
    v.push_back("");
    for(auto x : se){
        v.push_back(x);
    }
    n=v.size()-1;
    Try(1);
    sort(res.begin(),res.end());
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}