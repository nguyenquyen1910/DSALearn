#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100];
//Ham khoi tao
void init(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
//Ham check xem da la cau hinh cuoi chua
bool check(int a[],int n){
    for(int i=1;i<=n;i++){
        if(a[i]==0)
            return false;
    }
    return true;
}
//Ham sinh ra cau hinh ke tiep
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    a[i]=1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    init();
    while(!check(a,n)){
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    //In ra cau hinh cuoi cung
    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }
    return 0;
}