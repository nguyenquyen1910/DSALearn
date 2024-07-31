#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n+1];ll sumodd=0,sumeven=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sumodd+=a[i];
        }
        else sumeven+=a[i];
    }
    cout << ll(sumodd-sumeven);
    return 0;
}