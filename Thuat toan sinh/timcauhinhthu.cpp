#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,b[100],final=0;
bool check(int a[],int b[],int n){
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}
void init(){
    for(int i=1;i<=n;i++){
        b[i]=i;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && b[i]>b[i+1]){
        --i;
    }
    if(i==0){
        final=1;
    }
    else{
        int j=n;
        while(b[j]<b[i]){
            --j;
        }
        swap(b[i],b[j]);
        reverse(b+i+1,b+n+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    init();
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int cnt=0;
    while(!final && !check(a,b,n)){
        ++cnt;
        sinh();
    }
    ++cnt;
    cout << cnt;
    return 0;
}