#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<string> res;
void init(){
    queue<string> q;
    q.push("6");q.push("8");
    while(1){
        string x=q.front();q.pop();
        if(x.size()==19) break;
        res.push_back(x);
        q.push(x+"6");
        q.push(x+"8");
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    for(auto x : res){
        cout << x << " ";
    }
    return 0;
}