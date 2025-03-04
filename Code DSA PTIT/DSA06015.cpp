#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r){
    int n1=m-l+1,n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++) L[i]=a[i+l];
    for(int i=0;i<n2;i++) R[i]=a[i+m+1];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k++]=L[i++];
        }
        else a[k++]=R[j++];
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}
void mergesort(int a[],int l,int r){
    if(l>=r) return;
    int m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int &x : a) cin>>x;
        mergesort(a,0,n-1);
        for(int x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}