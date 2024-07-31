// Co n qua tao voi khoi luong da biet. Chia thanh 2 nua sao cho do lech trong luong it nhat
// in ra trong luong chenh lech do
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100],final=0;
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
    if(i==0){
        final=1;
    }
    a[i]=1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    init();
    int b[n];
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    ll ans=1e18;
    while(!final){
        ll sum1=0,sum2=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1) sum1+=b[i];
            else sum2+=b[i];
        }
        ans=min(ans,abs(sum1-sum2));
        sinh();
    }
    cout << ans;
    return 0;
}