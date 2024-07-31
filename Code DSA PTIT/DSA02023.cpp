#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[100];
vector<string> v;
vector<vector<string>> ans;
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            vector<string> tmp;
            for(int idx=1;idx<=k;idx++){
                tmp.push_back(v[a[idx]]);
            }
            sort(tmp.begin(),tmp.end());
            ans.push_back(tmp);
        }
        else Try(i+1);
    }
}
void solve(){
    v.clear();
    cin>>n>>k;
    set<string> se;
    for(int i=1;i<=n;i++){
        string s;cin>>s;
        se.insert(s);
    }
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
    n=se.size();
    v.push_back("");
    for(auto x : se){
        v.push_back(x);
    }
    Try(1);
    sort(ans.begin(),ans.end());
    for(auto x : ans){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}