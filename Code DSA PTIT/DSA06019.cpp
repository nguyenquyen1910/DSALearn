#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second)
        return a.second>b.second;
    return a.first<b.first;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        map<int,int> mp;
        for(int &x : a){
            cin>>x;
            mp[x]++;
        }
        vector<pair<int,int>> v;
        for(auto x : mp){
            v.push_back(x);
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x : v){
            if(x.second==1){
                cout << x.first << " ";
            }
            else{
                for(int i=0;i<x.second;i++){
                    cout << x.first << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}