/*Tìm mảng con ngắn nhất có tổng bằng K*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> mp;
    long long sum=0;
    int res=INT_MAX;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(mp.count(sum-k)){
            res=min(res,i-mp[sum-k]);
        }
        mp[sum]=i;
    }
    if(res==INT_MAX) cout << "-1\n";
    else cout << res << endl;
    return 0;
}