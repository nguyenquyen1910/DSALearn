#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n,int k){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==k)
            return 1;
        else if(a[m]>k){
            r=m-1;
        }
        else l=m+1;
    }
    return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n];
        for(int &x : a) cin>>x;
        if(binarysearch(a,n,k)){
            cout << "1\n";
        }
        else cout << "-1\n";
    }
    return 0;
}