#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> res;
int a[1001],n;
bool check(vector<int> v){
    if(v.size()<=1){
        return false;
    }
    vector<int> tmp=v;
    sort(tmp.begin(),tmp.end());
    return tmp==v;
}
bool cmp(vector<int> a, vector<int> b) {
    string x = "", y = "";
    for (int i : a) x+=to_string(i)+" ";
    x.pop_back();
    for (int i : b) y+=to_string(i)+" ";
    y.pop_back();
    return x < y;
}
void Try(int i,vector<int> v){
    for(int j=0;j<=1;j++){
        if(j==1) v.push_back(a[i]);
        if(i==n){
            if(check(v)){
                res.push_back(v);
            }
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
    for(int i=1;i<=n;i++) cin>>a[i];
    Try(1,{});
    sort(res.begin(),res.end(),cmp);
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}