#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,s,a[100],ans;
void Try(int i,int cur,int cnt){
    if(i==n || cur>=s || cnt>=ans){
        if(cur==s){
            ans=min(ans,cnt);    
        }
        return;
    }
    Try(i+1,cur,cnt);
    Try(i+1,cur+a[i],cnt+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>s;
    ans=INT_MAX;
    for(int i=1;i<=n;i++) cin>>a[i];
    Try(1,0,0);
    cout << ans;
    return 0;
}