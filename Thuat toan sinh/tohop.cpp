#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,a[1000],final=0;
//Ham khoi tao
void init(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
//Ham sinh
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        --i;
    }
    if(i==0){
        final=1;
    }
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
    cin>>n>>k;
    init();
    while(!final){
        for(int i=1;i<=k;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}