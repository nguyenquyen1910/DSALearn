#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second)
        return a.second<b.second;
    return a.first<b.first;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>a[i].second;
    }
    sort(a,a+n,cmp);
    int cnt=1,key=a[0].second;
    for(int i=1;i<n;i++){
        if(a[i].first>=key){
            cnt++;
            key=a[i].second;
        }
    }
    cout << cnt;
    return 0;
}