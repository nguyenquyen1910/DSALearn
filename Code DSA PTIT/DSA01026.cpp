#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100],n;
bool check(int a[],int n){
    if(n<6) return false;
    for(int i=1;i<n;i++){
        if(a[i]==8 && a[i+1]==8)
            return false;
    }
    if(a[1]!=8)
        return false; 
    if(a[n]!=6)
        return false;
    for(int i=1;i<n-2;i++){
        if(a[i]==6 && a[i+1]==6 && a[i+2]==6 && a[i+3]==6)
            return false;
    }
    return true;
}
void solve(int a[],int n){
    for(int i=1;i<=n;i++){
        a[i]=6;
    }
    while(1){
        if(check(a,n)){
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << endl;
        }
        int i=n;
        while(i>=1 && a[i]==8){
            a[i]=6;
            --i;
        }
        if(i==0) return;
        a[i]=8;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    solve(a,n);
    return 0;
}