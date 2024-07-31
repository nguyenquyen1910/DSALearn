#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int used[100],n;
string a,b;
void Try(int i){
    for(int j=0;j<n;j++){
        if(!used[j]){
            b[i]=a[j];
            used[j]=1;
            if(i==n-1) cout << b << ' ';
            else Try(i+1);
            used[j]=0;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>a;
        sort(a.begin(),a.end());
        n=a.size();
        b.resize(n);
        Try(0);
        cout << endl;
    }
    return 0;
}