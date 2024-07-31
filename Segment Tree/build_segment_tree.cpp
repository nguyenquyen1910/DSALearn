#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
int a[1000];
int t[10000];
//build
void build(int v,int l,int r){
    if(l==r){
        t[v]=a[l];
    }
    else{
        int m=(l+r)/2;
        build(2*n,l,m);
        build(2*n+1,m+1,r);
        t[v]=t[2*v]+t[2*v+1];
    }
}
//query O(logn)
int sum(int v,int t_left,int t_right,int l,int r){
    if(l>r) return 0;
    if(l==t_left && r==t_right){
        return t[v];
    }
    else{
        int t_mid=(t_left+t_right)/2;
        return sum(2*v,t_left,t_mid,l,min(t_mid,r)) + sum(2*v+1,t_mid+1,t_right,max(t_left,l),r);
    }
}
//uodate a[pos]=val
// Chi update tren cay khong update tren mang ban dau
void update(int v,int l,int r,int pos,int val){
    if(l==r){
        t[v]=val;
    }
    else{
        int m=(l+r)/2;
        if(pos<=m){
            update(2*v,l,m,pos,val);
        }
        else{
            update(2*v+1,m+1,r,pos,val);
        }
        t[v]=t[2*v]+t[2*v+1];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    build(1,0,n-1);
    int l,r;cin>>l>>r;
    cout << sum(1,0,n-1,l,r);
    return 0;
}