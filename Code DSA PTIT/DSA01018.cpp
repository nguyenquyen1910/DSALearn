#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100];
void testcase(){
    int n,k;cin>>n>>k;
    for(int i=1;i<=k;i++) cin>>a[i];
    int i=k;
    while(i>=1 && a[i]==a[i-1]+1) --i;
    if(i!=0) a[i]--;
    for(int j=i+1;j<=k;j++){
        a[j]=n-k+j;
    }
    for(int j=1;j<=k;j++){
        cout << a[j] << " ";
    }
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