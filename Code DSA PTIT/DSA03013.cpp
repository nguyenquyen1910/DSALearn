#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int d;cin>>d;
    string s;cin>>s;
    int dem[127]={},maxx=0;
    for(char i : s){
        dem[i]++;
        maxx=max(maxx,dem[i]);
    }
    if(maxx<=ceil((float)s.size()/d)) cout << 1;
    else cout << -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}