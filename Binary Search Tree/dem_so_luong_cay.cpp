//Dem so luong cay duoc tao ra tu n nut cho truoc la tu 1 den n co the tao ra
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int dp[20];
int Try(int n){
    if(n==0) return 1;//Chi co 1 cay con la NULL
    if(dp[n]!=-1) return dp[n];//TH dp[n] chua duoc cap nhat
    int res=0;
    for(int i=1;i<=n;i++){
        res+=Try(i-1)*Try(n-i);//Tong so cay cua cay con ben phai va ben trai
    }
    return dp[n]=res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    memset(dp,-1,sizeof(dp));
    cout << Try(n);
    return 0;
}