#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void check(ll a[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ll tmp=k-a[i]-a[j];
            if(binary_search(a+j+1,a+n,tmp)){
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        ll a[n];
        for(ll &x : a) cin>>x;
        sort(a,a+n);
        check(a,n,k);
        cout << endl;
    }
    return 0;
}
