#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100];
vector<string> res;
void Try(int i,vector<string> v,vector<string> ans){
    for(int j=0;j<=1;j++){
        if(j==1) ans.push_back(v[i]);
        if(i==n-1){
            string tmp="";
            for(auto x : ans){
                tmp+=x;
            }
            res.push_back(tmp);
        }
        else Try(i+1,v,ans);
        if(j==1) ans.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;vector<string> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    Try(0,v,{});
    sort(res.begin(),res.end());
    for(auto x : res){
        cout << x << endl;
    }
    return 0;
}