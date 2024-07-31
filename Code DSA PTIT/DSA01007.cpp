#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
char a[100];
void solve(char a[],int n){
    for(int i=1;i<=n;i++){
        a[i]='A';
    }
    while(1){
        for(int i=1;i<=n;i++){
            cout << a[i];
        }
        cout << " ";
        int i=n;
        while(i>0 && a[i]=='B'){
            a[i]='A';
            --i;
        }
        if(i==0) return;
        else{
            a[i]='B';
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n;
        solve(a,n);
        cout << endl;
    }
    return 0;
}