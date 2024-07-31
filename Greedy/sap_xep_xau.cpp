#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;cin>>s;
    int d;cin>>d;
    int dem[127]={},maxx=0;
    for(char i : s){
        dem[i]++;
        maxx=max(maxx,dem[i]);
    }
    if(maxx<=ceil((float)s.size()/d)) cout << 1;
    else cout << -1;
    return 0;
}