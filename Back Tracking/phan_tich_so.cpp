#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
vector<vector<int>> res;
void Try(int key,int cur,vector<int> v){
    if(key==0){
        res.push_back(v);
    }
    for(int j=cur;j>=1;j--){
        if(key>=j){
            v.push_back(j);
            Try(key-j,j,v);
            v.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    Try(n,n,{});
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}