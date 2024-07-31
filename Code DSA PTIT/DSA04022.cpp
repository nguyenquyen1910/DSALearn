#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int findchar(int n,ll k){
    if(k==(ll)pow(2,n-1))
        return n;
    if(k<(ll)pow(2,n-1))
        return findchar(n-1,k);
    else return findchar(n-1,k-(ll)pow(2,n-1));
}
void testcase(){
    int n;ll k;cin>>n>>k;
    printf("%c\n",findchar(n,k)+64);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
    }
    return 0;
}