#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int price[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int cnt=0;
        for(int i=9;i>=0;i--){
            cnt+=n/price[i];
            n%=price[i];
        }
        cout << cnt << endl;
    }
    return 0;
}