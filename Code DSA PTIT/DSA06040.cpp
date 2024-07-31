#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n1,n2,n3;cin>>n1>>n2>>n3;
        int a[n1],b[n2],c[n3];
        for(int &x : a) cin>>x;
        for(int &x : b) cin>>x;
        for(int &x : c) cin>>x;
        vector<ll> v;
        int i=0,j=0,k=0;
        while(i<n1 && j<n2 && k<n3){
            if(a[i]==b[j] && b[j]==c[k]){
                v.push_back(a[i]);
                ++i;++j;++k;
            }
            else if(a[i]<b[j]) ++i;
            else if(b[j]<c[k]) ++j;
            else ++k;
        }
        if(v.size()==0) cout << "-1";
        else{
            for(auto x : v){
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}   