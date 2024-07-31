#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    vector<string> res;
    queue<string> q;
    q.push("6");q.push("8");
    while(1){
        string top=q.front();q.pop();
        if(top.size()==n+1) break;
        res.push_back(top);
        q.push(top+"6");
        q.push(top+"8");
    }
    cout << res.size() << endl;
    for(int i=res.size()-1;i>=0;i--){
        cout << res[i] << " ";
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