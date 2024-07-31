#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    int a[100001],l[100001]={0},r[100001]={0};
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>a[i-1]){
            l[i]=l[i-1]+1;
        }
        else l[i]=1;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]>a[i+1]){
            r[i]=r[i+1]+1;        
        }
        else r[i]=1;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,l[i]+r[i]-1);
    }
    cout << ans;
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