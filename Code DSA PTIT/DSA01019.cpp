#include<bits/stdc++.h>
using namespace std;
using ll = long long;
char a[100];
int n;
bool check(char a[],int n){
    for(int i=1;i<n;i++){
        if(a[i]=='H' && a[i+1]=='H')
            return false;
    }
    if(a[1]!='H')
        return false;
    if(a[n]!='A')
        return false;
    return true;
}
void binary_list(char a[],int n){
    for(int i=1;i<=n;i++){
        a[i]='A';
    }
    while(1){
        if(check(a,n)){
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << endl;
        }
        int i=n;
        while(i>=1 && a[i]=='H'){
            a[i]='A';
            --i;
        }
        if(i==0) return;
        a[i]='H';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n;
        binary_list(a,n);
    }
    return 0;
}