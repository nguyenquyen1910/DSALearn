#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[100],final=0,ans;
void init(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if(i==0) final=1;
    a[i]=1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>k;
    init();
    int b[n];
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    while(!final){
        ll sum=0;
        for(int i=1;i<=n;i++){
            sum+=a[i]*b[i];
        }
        if(sum==k){
            ++ans;
            for(int i=1;i<=n;i++){
                if(a[i]){
                    cout << b[i] << ' ';
                }
            }
            cout << endl;
        }
        sinh();
    }
    cout << ans;
    return 0;
}