#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
vector<int> a,b;
vector<vector<int>> v;
bool check(vector<int> b){
    if(b.size()<2)
        return false;
    vector<int> tmp(b.begin(),b.end());
    sort(tmp.begin(),tmp.end());
    return tmp==b;
}
void Try(int i){
    for(int j=0;j<=1;j++){
        if(j==1) b.push_back(a[i]);
        if(i==n-1){
            if(check(b)){
                v.push_back(b);
            }
        }
        else Try(i+1);
        if(j==1) b.pop_back();
    }
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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    Try(0);
    sort(v.begin(),v.end(),cmp);
    for(auto x : v){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}