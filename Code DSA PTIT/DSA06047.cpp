#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]*=a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ll X=a[i]+a[j];
            if(binary_search(a.begin()+j+1,a.end(),X)){
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
        solve();
        cout << endl;
    }   
    return 0;
}