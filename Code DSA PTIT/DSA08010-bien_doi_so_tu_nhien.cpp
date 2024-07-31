#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    set<int> se;
    queue<pair<int,int>> q;
    q.push({n,0});
    se.insert(n);
    while(!q.empty()){
        pair<int,int> top=q.front();q.pop();
        if(top.first==2){
            cout << top.second+1;
            return;
        }
        for(int k=2;k<=sqrt(top.first);k++){
            if(top.first%k==0){
                if(se.count(top.first/k)==0){
                    q.push({top.first/k,top.second+1});
                    se.insert(top.first/k);
                }
            }
        }
        q.push({top.first-1,top.second+1});
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