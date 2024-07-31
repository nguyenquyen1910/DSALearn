#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return n>1;
}
int findval(int n){
    int key;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            key=i;
            n/=i;
        }
    }
    if(n>1 && isPrime(n)){
        key=n;
    }
    return key;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        ll sum=0;
        for(int i=l;i<=r;i++){
            sum+=findval(i);
        }
        cout << sum << '\n';
    }
    return 0;
}