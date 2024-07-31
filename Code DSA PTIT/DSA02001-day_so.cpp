#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[15];
void display(int n){
    cout << "[";
    for(int i=0;i<n-1;i++){
        cout << a[i] << " ";
    }
    cout << a[n-1] << "] ";
    cout << endl;
}
void Try(int n){
    display(n);
    for(int i=0;i<n-1;i++){
        a[i]=a[i]+a[i+1];
    }
    if(n!=1) Try(n-1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Try(n);
        cout << endl;
    }
    return 0;
}