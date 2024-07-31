#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        pair<int,int> a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a,a+n);
        int pos=a[0].second,val=a[0].first,ans=-1;
        for(int i=1;i<n;i++){
            if(a[i].first>val){
                ans=max(ans,a[i].second-pos);
            }
            if(pos>a[i].second){
                pos=a[i].second;
                val=a[i].first;
            }
        }
        cout << ans << endl;
    }
    return 0;
}