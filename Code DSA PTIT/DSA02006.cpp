#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,final;
vector<int> a,b;
void solve(){
    int sum=0;
    for(int i=0;i<b.size();i++){
        sum+=a[b[i]];
    }
    if(sum==k){
        final=1;
        cout << "[";
        for(int i=0;i<b.size();i++){
            cout << a[b[i]];
            if(i!=b.size()-1) cout << " ";
        }
        cout << "] ";
    }
}
void Try(int i){
    for(int j=1;j>=0;j--){
        if(j==1) b.push_back(i);
        if(i==n-1) solve();
        else Try(i+1);
        if(j==1) b.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(n);
        final=0;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        Try(0);
        if(!final) cout << -1;
        cout << endl;
    }
    return 0;
}