#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int l[n]={0},r[n]={0};
        for(int i=1;i<=n;i++){
            if(a[i]>a[i-1]){
                l[i]=l[i-1]+1;
            }
            else{
                l[i]=1;
            }
        }
        for(int i=n;i>=1;i++){
            if(a[i]>a[i+1]){
                r[i]=r[i-1]+1;
            }
            else{
                r[i]=1;
            }
        }
        ll ans=0;
        for(int i=1;i<=n;i++){
        }
    }
    return 0;
}