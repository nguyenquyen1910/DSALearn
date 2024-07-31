#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int d[100005];
int solve(int s,int t){
    queue<int> q;
    q.push(s);
    d[s]=0;
    set<int> se;
    se.insert(s);
    while(!q.empty()){
        int top=q.front();q.pop();
        if(top==t) return d[top];
        if(se.count(top-1)==0 && top-1>1){
            se.insert(top-1);
            q.push(top-1);
            d[top-1]=d[top]+1;
        }
        if(se.count(top*2)==0){
            se.insert(top*2);
            q.push(top*2);
            d[top*2]=d[top]+1;
        }
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int s,t;cin>>s>>t;
    cout << solve(s,t);
    return 0;
}