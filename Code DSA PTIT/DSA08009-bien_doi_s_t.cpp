#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int s,t;cin>>s>>t;
    queue<pair<int,int>> q;
    set<int> se;
    q.push({s,0});
    se.insert(s);
    while(!q.empty()){
        pair<int,int> p=q.front();q.pop();
        if(p.first==t){
            cout << p.second;
            return;
        }
        if(p.first-1==t || p.first*2==t){
            cout << p.second+1;
            return;
        }
        if(p.first-1>=0 && se.count(p.first-1)==0){
            q.push({p.first-1,p.second+1});
            se.insert(p.first-1);
        } 
        if(p.first*2<=t*2 && se.count(p.first*2)==0){
            q.push({p.first*2,p.second+1});
            se.insert(p.first*2);
        } 
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}