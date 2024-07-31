#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m>>k;
        int a[n],b[m],c[k];vector<int> tmp,res;
        for(int &x : a) cin>>x;
        for(int &x : b) cin>>x;
        for(int &x : c) cin>>x;
        int i=0,j=0,l=0;bool check=false;
        while(i<n && j<m && l<k){
            if(a[i]==b[j] && a[i]==c[l]){
                cout << a[i] << " ";
                check=true;
                ++i;++j;++l;
                continue;
            }
            if(a[i]<b[j]) ++i;
            else if(b[j]<c[l]) ++j;
            else ++l;
        }
        if(check==false) cout << "NO";
        cout << endl;
    }
    return 0;
}