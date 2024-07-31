#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}
int binarysearch(vector<pair<int,int>> &v,int a[],int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[v[m].second]==x){
            return v[m].second+1;
        }
        else if(a[v[m].second]>x){
            r=m-1;
        }
        else l=m+1;
    }
    return -1;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n];
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            v.push_back({a[i],i});
        }
        sort(v.begin(),v.end(),cmp);
        cout << binarysearch(v,a,n,k) << endl;
    }
    return 0;
}