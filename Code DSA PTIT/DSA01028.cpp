#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[100];
vector<int> b;
void solve(){
    for(int i=1;i<=k;i++){
        cout << b[a[i]] << " ";
    }
    cout << endl;
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
    set<int> se;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        se.insert(x);
    }
    b.push_back(-1);
    for(auto x : se){
        b.push_back(x);
    }
    n=b.size()-1;
    Try(1);
    return 0;
}