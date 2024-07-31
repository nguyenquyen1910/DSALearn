#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int findmaxsum(int *a,int l,int m,int r){
    int sum=0,maxleft=INT_MIN,maxright=INT_MIN;
    for(int i=m;i>=l;i--){
        sum+=a[i];
        maxleft=max(maxleft,sum);
    }
    sum=0;
    for(int i=m+1;i<=r;i++){
        sum+=a[i];
        maxright=max(maxright,sum);
    }
    return maxleft+maxright;
}
int maxsub(int *a,int l,int r){
    if(l==r) return a[l];
    int m=(l+r)/2;
    return max({maxsub(a,l,m),maxsub(a,m+1,r),findmaxsum(a,l,m,r)});
}
void testcase(){
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    cout << maxsub(a,0,n-1);
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