#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,s,a[100],ans;
void Try(int i,int cur,int cnt){
    if(i==n || cur>=s || cnt>=ans){
        if(cur==s)
            ans=min(ans,cnt);
        return;
    }
    Try(i+1,cur,cnt);
    Try(i+1,cur+a[i],cnt+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ans=INT_MAX;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Try(0,0,0);
        cout << (ans==INT_MAX ? -1 : ans);
        cout << endl;
    }
    return 0;
}