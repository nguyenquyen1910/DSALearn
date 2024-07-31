#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,s,p;
vector<vector<int>> res;
int used[1000];
void reset(){
    res.clear();
    memset(used,0,sizeof(used));
}
bool prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return n>1;
}
bool checkvt(vector<int> v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1])
            return false;
    }
    for(int i : v){
        if(!prime(i))
            return false;
    }
    return true;
}
void Try(int i,int cur,vector<int> v){
    if(v.size()==n){
        if(cur==s && checkvt(v))
            res.push_back(v);
        return;
    }
    for(int j=p+1;j<=s;j++){
        if(!used[j]){
            if(cur+j<=s){
                used[j]=1;
                v.push_back(j);
                Try(i+1,cur+j,v);
                v.pop_back();
                used[j]=0;
            }
            else return;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        reset();
        cin>>n>>p>>s;
        Try(1,0,{});
        sort(res.begin(),res.end());
        cout << res.size() << endl;
        for(auto x : res){
            for(auto y : x){
                cout << y << " ";
            }
            cout << endl;
        }
    }
    return 0;
}