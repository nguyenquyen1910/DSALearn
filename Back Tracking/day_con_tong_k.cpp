//Co the trung nhau
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k;
vector<vector<int>> res;
int a[100];
void Try(int i,vector<int> v,int curSum){
    if(curSum>k) return;
    if(curSum==k){
        res.push_back(v);
        return;
    }
    for(int j=i;j<=n;j++){
        if(curSum+a[j]<=k){
            v.push_back(a[j]);
            Try(j,v,curSum+a[j]);
            v.pop_back();
        }
    }
}
//Khong trung nhau
void Try2(int i,int curSum,vector<int> v){
    if(curSum>k) return;
    if(curSum==k){
        res.push_back(v);
        return;
    }
    for(int j=i;j<=n;j++){
        if(curSum+a[j]<=k){
            v.push_back(a[j]);
            Try(j+1,v,curSum+a[j]);
            v.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    Try2(1,0,{});
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}