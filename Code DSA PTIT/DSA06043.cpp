#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int findpos(int a[],int n,int sum){
    int res;
    int tmp=0;
    for(int i=0;i<n;i++){
        tmp+=a[i];
        if(tmp==sum-tmp+a[i]){
            return i+1;
        }
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout << findpos(a,n,sum) << endl;
    }
    return 0;
}