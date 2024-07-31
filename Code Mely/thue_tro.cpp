#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m,k;cin>>n>>m>>k;
    int a[n];
    int pos=INT_MAX;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=m-1;i>=1;i--){
        if(a[i]!=0 && a[i]<=k){
            pos=i;
            break;
        }
    }
    for(int i=m+1;i<=n;i++){
        if(a[i]!=0 && a[i]<=k){
            pos=min(pos,i);
        }
    }
    if(pos==INT_MAX){
        cout << -1;
    }
    else
        cout << abs((pos-m)*10);
    
    return 0;
}