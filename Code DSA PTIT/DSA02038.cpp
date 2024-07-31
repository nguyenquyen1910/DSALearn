#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100],k,b[100];
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            for(int i=1;i<=k;i++){
                cout << b[a[i]] << ' ';
            }
            cout << endl;
        }
        else Try(i+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>b[i];
        sort(b+1,b+n+1);
        Try(1);
    }
    return 0;
}