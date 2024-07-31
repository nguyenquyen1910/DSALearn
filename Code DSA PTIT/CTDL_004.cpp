#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,ans=0;
vector<int> a,idx,res;
bool check(vector<int> v){
    for(int i=1;i<=k-1;i++){
        if(v[i]>v[i+1])
            return false;
    }
    return true;
}
void Try(int i){
    for(int j=idx[i-1]+1;j<=n-k+i;j++){
        idx[i]=j;
        res[i]=a[idx[i]];
        if(i==k){
            if(check(res)){
                ans++;
            }
        }
        else Try(i+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    a.resize(n+1);
    idx.resize(k+1,0);
    res.resize(k+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    Try(1);
    cout << ans;
    return 0;
}