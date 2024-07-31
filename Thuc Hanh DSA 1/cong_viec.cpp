#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase() {
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());
    for(auto x : a){
        cout << x.first << " " << x.second << endl;
    }
    ll res=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        pq.push(a[i].second);
        while(a[i].first<pq.size()) pq.pop();
    }
    while(!pq.empty()){
        res+=pq.top();
        pq.pop();
    }
    cout << res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    testCase();
    return 0;
}