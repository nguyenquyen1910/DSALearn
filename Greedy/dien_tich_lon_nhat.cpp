#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int max_area(vector<int> &a){
    int l=0,r=a.size()-1;
    int maxarea=0;
    while(l<r){
        int curarea=min(a[l],a[r])*(r-l);
        maxarea=max(maxarea,curarea);
        if(a[l]<a[r]) ++l;
        else --r;
    }
    return maxarea;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout << max_area(a);
    return 0;
}