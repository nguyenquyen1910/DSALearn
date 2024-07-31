#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];map<int,int> mp;
        for(int &x : a){
            cin>>x;
            mp[x]++;
        }
        int res=-1,val=0;
        for(auto x : mp){
            if(x.second>res){
                res=x.second;
                val=x.first;
            }
        }
        if(res==-1){
            cout << "NO\n";
        }
        else{
            if(res>n/2) cout << val << endl;
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}