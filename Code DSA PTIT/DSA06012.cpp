#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> a(n);
        for(int &x : a) cin>>x;
        sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<k;i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}