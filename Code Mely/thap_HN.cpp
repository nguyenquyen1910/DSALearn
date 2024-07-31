#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<pair<char,char>> res;
void Try(int n,char a,char b,char c){
    if(n==1){
        res.push_back({a,c});
        return;
    }
    Try(n-1,a,c,b);
    Try(1,a,b,c);
    Try(n-1,b,a,c);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    Try(n,'1','2','3');
    cout << res.size() << endl;
    for(auto x : res){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}