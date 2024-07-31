#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,s;cin>>n>>s;
    int coins[n];
    for(int &x : coins) cin>>x;
    int F[s+5];
    F[0]=0;
    for(int i=1;i<=s;i++){
        F[i]=1e9;
        for(int coin : coins){
            if(i>=coin){
                F[i]=min(F[i],F[i-coin]+1);
            }
        }
    }
    cout << F[s];
    return 0;
}