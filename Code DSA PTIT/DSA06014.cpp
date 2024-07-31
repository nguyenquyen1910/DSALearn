#include<bits/stdc++.h>
#define e 1000000
using namespace std;
int prime[e];
void solve(int n){
    prime[0]=prime[1]=0;
    for(int i=2;i<=n;i++){
        prime[i]=1;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
}
void solution(){
    int n;cin>>n;
    for(int i=2;i<=n/2;i++){
        if(prime[i] && prime[n-i]){
            cout << i << " " << n-i;
            return;
        }
    }
    cout << -1;
}
int main(){
    solve(e);
    int t;cin>>t;
    while(t--){
        solution();
        cout << endl;
    }
    return 0;
}