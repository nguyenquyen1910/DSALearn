#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,x;
vector<ll> a;
bool BS(ll l,ll r,ll x){
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            return m;
        }
        else if(a[m]>x){
            r=m-1;
        }
        else l=m+1;
    }
    return 0;
}
void testcase(){
    cin>>n>>x;
    a.clear();
    a.resize(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    if(a[n]==x){
        cout << "YES";
        return;
    }
    for(ll i=1;i<=n;i++){   
        if(BS(i,n,a[i-1]+x)){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}