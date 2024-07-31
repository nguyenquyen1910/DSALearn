#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        if(sqrt(n)*sqrt(n)==n) cout << sqrt(n) << " " << sqrt(n);
        else{
            for(int i=sqrt(n);i>=1;i--){
                if(n%i==0){
                    cout << i << " " << n/i;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}