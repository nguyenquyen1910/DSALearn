#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[100];
void solve(int a[],int n,int k){
    int i=k;
    while(i>=1 && a[i]==n-k+i) --i;
    if(i==0){
        return;
    }
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n>>k;map<int,int> mp;
        for(int i=1;i<=k;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        solve(a,n,k);
        int cnt=0;
        for(int i=1;i<=k;i++){
            if(mp[a[i]]==0){
                ++cnt;
            }
        }
        if(cnt==0) cout << k << endl;
        else cout << cnt << endl;
    }
    return 0;
}