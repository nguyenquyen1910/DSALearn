#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100],n,k;
bool check(int a[],int k){
    for(int i=1;i<k;i++){
        if(a[i]==a[i+1])
            return false;
    }
    return true;
}
void sinh(int a[],int n,int k){
    for(int i=1;i<=k;i++) a[i]=i;
    while(1){
        if(check(a,k)){
            for(int i=1;i<=k;i++){
                printf("%c",a[i]+64);
            }
            printf("\n");
        }
        int i=k;
        while(i>=1 && a[i]==n-k+i) --i;
        if(i==0) return;
        else{
            a[i]++;
            for(int j=i+1;j<=k;j++){
                a[j]=a[j-1]+1;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        sinh(a,n,k);
    }
    return 0;
}