#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,final=0;
vector<ll> res;
ll a[505];
void next(string &s){
    int i=s.size()-1;
    while(i>=0 && s[i]=='9'){
        s[i]='0';
        --i;
    }
    if(i==-1) final=1;
    else s[i]='9';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s(13,'0');
    next(s);
    while(!final){
        res.push_back(stoll(s));
        next(s);
    }
    for(int i=1;i<=500;i++){
        for(ll x : res){
            if(a[i]==0 && x%i==0){
                a[i]=x;
            }
        }
    }
    int t;cin>>t;
    while(t--){
        cin>>n;
        cout << a[n] << endl;
    }
    return 0;
}