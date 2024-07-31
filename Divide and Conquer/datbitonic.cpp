#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    vector<int> F1(a,a+n);
    vector<int> F2(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                F1[i]=max(F1[i],F1[j]+a[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]<a[j]){
                F2[i]=max(F2[i],F2[j]+a[i]);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,F1[i]+F2[i]-a[i]);
    }
    cout << ans;
    return 0;
}