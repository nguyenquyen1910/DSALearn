#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;cin>>n;
    while(n!=1){
        cout << n << " ";
        if(n%2==0){
            n/=2;
        }
        else{
            n=n*3+1;
        }
    }
    cout << 1;
    return 0;
}