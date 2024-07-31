#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100],n,final=0;
void init(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if(i==0) final=1;
    a[i]=1;
}
bool check(int a[],int n){
    int l=1,r=n;
    while(l<=r){
        if(a[l]!=a[r])
            return false;
        ++l;--r;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    while(!final){
        if(check(a,n)){
            for(int i=1;i<=n;i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}