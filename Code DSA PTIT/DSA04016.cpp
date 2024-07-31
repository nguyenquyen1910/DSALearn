#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n,m,x;cin>>n>>m>>x;
    int a[n],b[m],res[n+m+1];
    for(int &x : a) cin>>x;
    for(int &x : b) cin>>x;
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }
        else res[k++]=b[j++];
    } 
    while(i<n) res[k++]=a[i++];
    while(j<m) res[k++]=b[j++];
    cout << res[x-1];
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