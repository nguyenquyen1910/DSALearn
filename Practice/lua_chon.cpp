#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second)
        return a.second<b.second;
    return a.first<b.first;
}
void testcase(){
    int n;cin>>n;
    pair<int,int> a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n,cmp);
    int key=a[0].second;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(a[i].first>=key){
            ++cnt;
            key=a[i].second;
        }
    }
    cout << cnt;
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