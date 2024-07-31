#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[100],ans,s;
void solve(){
    int sum=0;
    for(int i=1;i<=k;i++){
        sum+=a[i];
    }
    if(sum==s) ans++;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) solve();
        else Try(i+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    while(true){
        cin>>n>>k>>s;
        if(n==0 && k==0 && s==0) break;
        ans=0;
        Try(1);
        cout << ans << endl;
    }
    return 0;
}