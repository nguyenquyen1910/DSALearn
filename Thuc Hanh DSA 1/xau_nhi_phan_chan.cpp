#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
vector<string> res;
bool cmp(string a,string b){
    if(a.size()!=b.size())
        return a.size()<b.size();
    return a<b;
}
void Try(string s){
    if(s.size()<=n/2){
        res.push_back(s);
    if(s.size()==n/2)
            return;
    }
    Try(s+'0');
    Try(s+'1');
}
void testcase(){
    res.clear();
    cin>>n;
    if(n%2==0)
        Try("");
    sort(res.begin(),res.end(),cmp);
    for(auto x : res){
        cout << x;
        reverse(x.begin(),x.end());
        cout << x << " ";
    }
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