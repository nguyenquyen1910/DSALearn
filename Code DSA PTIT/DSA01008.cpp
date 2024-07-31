#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100],n,k;
bool check(int a[],int n,int k){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) ++cnt;
    }
    return cnt==k;
}
void binaryarray(int a[],int n){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
    while(1){
        if(check(a,n,k)){
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << endl;
        }
        int i=n;
        while(i>=1 && a[i]==1){
            a[i]=0;
            --i;
        }
        if(i==0) return;
        a[i]=1;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        binaryarray(a,n);
    }
    return 0;
}