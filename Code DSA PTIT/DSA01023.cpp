#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100],n,k,final=0;
bool check(int a[],int b[],int k){
    for(int i=1;i<=k;i++){
        if(a[i]!=b[i])
            return false;
    }
    return true;
}
void init(){
    for(int i=1;i<=k;i++) a[i]=i;
}
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i) --i;
    if(i==0) final=1;
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
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
        init();
        int b[k];
        for(int i=1;i<=k;i++) cin>>b[i];
        int cnt=1;
        while(!final && !check(a,b,k)){
            cnt++;
            sinh();
        }
        cout << cnt << endl;
    }
    return 0;
}