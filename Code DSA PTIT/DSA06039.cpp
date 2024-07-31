#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void findnum(int a[],int n){
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]]>1){
            cout << a[i];
            return;
        }
    }
    cout << "NO";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int &x : a){
            cin>>x;
        }
        findnum(a,n);
        cout << endl;
    }
    return 0;
}