#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n],sum=0,sum1=0,sum2=0;
        for(int &x : a){
            cin>>x;
            sum+=x;
        }
        sort(a,a+n);
        int ans=INT_MIN;
        for(int i=0;i<k;i++){
            sum1+=a[i];
        }
        ans=max(ans,abs(sum-2*sum1));
        for(int i=0;i<n-k;i++){
            sum2+=a[i];
        }
        ans=max(ans,abs(sum-2*sum2));
        cout << ans << endl;
    }
    return 0;
}