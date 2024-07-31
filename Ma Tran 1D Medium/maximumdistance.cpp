/* Tìm khoảng cách lớn nhất giữa 2 chỉ số i,j sao cho trị đối a[i]-a[j]=K */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=-1;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.count(a[i]-k)){
            res=max(res,i-mp[a[i]-k]);
        }
        if(mp.count(a[i]+k)){
            res=max(res,i-mp[a[i]+k]);
        }
        if(!mp.count(a[i])){
            mp[a[i]]=i;
        }
    }
    cout << res;
    return 0;
}