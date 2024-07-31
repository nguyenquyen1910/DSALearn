#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> res;
int n,a[100];
void Try(int i,vector<int> v){
    for(int j=0;j<=1;j++){
        if(j==1) v.push_back(a[i]);
        if(i==n-1){
            res.push_back(v);
        }
        else Try(i+1,v);
        if(j==1) v.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    Try(0,{});
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}