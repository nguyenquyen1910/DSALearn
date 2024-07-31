#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100];
set<vector<int>> res;
vector<int> v;
void Try(int i,int sum){
    for(int j=i;j<=n;j++){
        v.push_back(a[j]);
        sum+=a[j];
        if(sum%2==1){
            vector<int> tmp(v.rbegin(),v.rend());
            res.insert(tmp);
        }
        Try(j+1,sum);
        v.pop_back();
        sum-=a[j];
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        v.clear();
        res.clear();
        Try(1,0);
        for(auto x : res){
            for(auto y : x){
                cout << y << " ";
            }
            cout << endl;
        }
    }
    return 0;
}