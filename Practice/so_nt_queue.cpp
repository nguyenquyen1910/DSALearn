#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> res;
bool check(ll x,int n){
    if(x%2==0) return false;
    string s=to_string(x);
    if(s.length()>n || s.size()<4) return false;
    set<char> digits(s.begin(), s.end());
    if(digits.size()!=4) 
        return false;
    for(char digit : digits) {
        if(digit != '2' && digit != '3' && digit != '5' && digit != '7')
            return false;
    }
    return true;
}
void init(int n){
    queue<ll> q;
    q.push(2); q.push(3); q.push(5); q.push(7);
    while (!q.empty()) {
        ll top = q.front(); q.pop();
        if(check(top,n)) 
            res.push_back(top);
        if(to_string(top).length() >= n) 
            continue;
        for(char digit : {'2', '3', '5', '7'}) {
            int num=top*10+(digit-'0');
            q.push(num);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    init(n);
    for(auto x : res){
        cout << x;
        cout << endl;
    }
    return 0;
}