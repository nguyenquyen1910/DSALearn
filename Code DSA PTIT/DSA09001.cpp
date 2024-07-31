#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n,m;cin>>n>>m;
    vector<int> ke[1005];
    for(int i=1;i<=m;i++){
        int x,y;cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        cout << i << ": ";
        sort(ke[i].begin(),ke[i].end());
        for(auto x : ke[i]){
            cout << x << " ";
        }
        cout << endl;
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