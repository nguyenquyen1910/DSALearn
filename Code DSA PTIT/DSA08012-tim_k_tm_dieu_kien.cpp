#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> res;
bool check(int n){
    map<int,int> mp;
    while(n>0){
        mp[n%10]++;
        n/=10;
    }
    for(int i=0;i<=9;i++){
        if(mp[i]>1) return false;
    }
    return true;
}
void init(){
    queue<int> q;
    for(int i=1;i<=5;i++) q.push(i);
    while(1){
        int x=q.front();q.pop();
        res.push_back(x);
        if(x>=1e5) break;
        for(int i=0;i<=5;i++){
            int tmp=x*10+i;
            if(check(tmp)){
                q.push(tmp);
            }
        }
    }
}
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    sort(res.begin(),res.end());
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        int cnt=0;
        for(auto x : res){
            if(l<=x && x<=r) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}