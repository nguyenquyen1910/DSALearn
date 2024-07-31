#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<string> res;
void init(){
    queue<string> q;
    q.push("6");
    q.push("8");
    while(!q.empty()){
        string s=q.front();q.pop();
        if(s.size()==19) break;
        res.push_back(s);
        q.push(s+"6");
        q.push(s+"8");
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    init();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=0;i<n;i++){
            string tmp=res[i];
            cout << tmp;
            reverse(tmp.begin(),tmp.end());
            cout << tmp << " ";
        }
        cout << endl;
    }
    return 0;
}