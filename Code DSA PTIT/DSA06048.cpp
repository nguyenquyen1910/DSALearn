#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        ll a[n];
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(max_element(a,a+n)==a+n-1){
                cnt=0;
            }
            else{
                cnt=max_element(a,a+n)-a+1;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}