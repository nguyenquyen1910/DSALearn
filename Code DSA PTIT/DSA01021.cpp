#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100],n,k;
void test(){
    cin>>n>>k;
    map<int,int> mp;
    for(int i=1;i<=k;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int i=k;
    while(i>=1 && a[i]==n-k+i) --i;
    if(i==0){
        cout << k;
        return;
    }
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
    int cnt=0;
    for(int i=1;i<=k;i++){
        if(mp[a[i]]==0) cnt++;
    }
    cout << cnt;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        test();
        cout << endl;
    }
    return 0;
}