#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,idx[100];
vector<vector<int>> res;
void Try(int i,vector<int> v){
    for(int j=idx[i-1]+1;j<=n-k+i;j++){
        idx[i]=j;
        if(i==k){
            vector<int> tmp;
            for(int i=1;i<=k;i++){
                tmp.push_back(v[idx[i]]);
            }
            res.push_back(tmp);
        }
        else Try(i+1,v);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    int a[100];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        if(mp[a[i]]==0){
            v.push_back(a[i]);
        }
        mp[a[i]]=1;
    }
    n=v.size();
    v.insert(v.begin(),0);
    Try(1,v);
    sort(res.begin(),res.end());
    for(auto x : res){
        for(auto y : x){
            cout << y;
        }
        cout << endl;
    }
    return 0;
}