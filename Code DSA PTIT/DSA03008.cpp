#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        pair<int,int> v[n];
        for(int i=0;i<n;i++){
            cin>>v[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>v[i].second;
        }
        sort(v,v+n,cmp);
        int cnt=1,key=v[0].second;
        for(int j=1;j<n;j++){
            if(v[j].first>=key){
                ++cnt;
                key=v[j].second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}