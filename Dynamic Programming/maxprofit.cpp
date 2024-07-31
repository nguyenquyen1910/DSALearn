#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int buy=a[0],maxprofit=0;
    for(int i=0;i<n;i++){
        if(a[i]<buy){
            buy=a[i];
        }
        else{
            maxprofit+=a[i]-buy;
            buy=a[i];
        }
    }
    cout << maxprofit;
    return 0;
}