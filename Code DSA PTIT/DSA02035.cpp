#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,ans;
int hv[100],used[100];
string a[100],b[100];
void solve(){
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            b[i][j]=a[i][hv[j]];
        }
    }
    sort(b,b+n);
    int minn=stoi(b[0]);
    int maxx=stoi(b[n-1]);
    ans=min(ans,maxx-minn);
}
void Try(int i){
    for(int j=0;j<k;j++){
        if(!used[j]){
            used[j]=1;
            hv[i]=j;
            if(i==k-1) solve();
            else Try(i+1);
            used[j]=0;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    ans=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    Try(0);
    cout << ans;
    return 0;
}