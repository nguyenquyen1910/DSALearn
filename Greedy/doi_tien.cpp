#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int coins[10]={1,2,5,10,20,50,100,200,500,1000};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int coin;cin>>coin;
    int cnt=0;
    for(int i=9;i>=0;i--){
        cnt+=coin/coins[i];
        coin%=coins[i];
    }
    cout << cnt;
    return 0;
}