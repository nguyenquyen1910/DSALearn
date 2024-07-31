#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
vector<string> res;
bool check(string s){
    if(s.size()%2==1)
        return false;
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r])
            return false;
        ++l;--r;
    }
    return true;
}
bool cmp(string a,string b){
    if(a.size()!=b.size())
        return a.size()<b.size();
    return a<b;
}
void Try(string s){
    if(s.size()<=n){
        if(check(s)) res.push_back(s);
    }
    if(s.size()==n) return;
    Try(s+'0');
    Try(s+'1');
}
void testcase(){
    cin>>n;
    res.clear();
    Try("");
    sort(res.begin(),res.end(),cmp);
    for(auto x : res){
        cout << x << " ";
    }   
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //int t;cin>>t;
    //while(t--){
        testcase();
        cout << endl;
    //}
    return 0;
}