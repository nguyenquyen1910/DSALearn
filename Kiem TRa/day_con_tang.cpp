#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> res;
int n,a[100];
bool check(vector<int> v){
    if(v.size()<2) return false;
    vector<int> tmp=v;
    sort(tmp.begin(),tmp.end());
    return v==tmp;
}
bool cmp(vector<int> a,vector<int> b){
    string s1="",s2="";
    for(auto x : a){
        s1+=to_string(x)+" ";
    }
    s1.pop_back();
    for(auto x : b){
        s2+=to_string(x)+" ";
    }
    s2.pop_back();
    return s1<s2;
}
void Try(int i,vector<int> v){
    for(int j=0;j<=1;j++){
        if(j==1) v.push_back(a[i]);
        if(i==n-1){
            if(check(v))
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
    sort(res.begin(),res.end(),cmp);
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}