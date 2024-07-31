#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string a;int n;
vector<string> res;
void Try(int i,string s){
    for(int j=0;j<=1;j++){
        if(j==1) s.push_back(a[i]);
        if(i==n-1){
            if(s!="")
                res.push_back(s);
        }
        else Try(i+1,s);
        if(j==1) s.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        res.clear();
        cin>>n;
        cin>>a;
        Try(0,"");
        sort(res.begin(),res.end());
        for(auto x : res){
            for(auto y : x){
                cout << y;
            }
            cout << " ";
        }
        cout << endl;
    } 
    return 0;
}