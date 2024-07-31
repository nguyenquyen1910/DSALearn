#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    set<int> se;
    for(int i=0;i<n;i++){
        int u,v;char c;cin>>u>>v>>c;
        se.insert(u);
        se.insert(v);
    }
    for(auto x : se){
        cout << x << " ";
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