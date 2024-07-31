#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100],final=0,dem;
//Ham khoi tao
void init(){
    dem=1;
    a[1]=n;
}
//Ham sinh
void sinh(){
    int i=dem;//khoi tao i bang dem
    while(i>=1 && a[i]==1){
        --i;//Bo qua cac gia tri 1
    }
    if(i==0){
        final=1;
    }
    else{
        int d=dem-i+1;//d la tong con thieu(bang so lan bo qua 1 va +1)
        a[i]--;// cong them 1 ben tren de bu lai
        dem=i;//gan dem bang i
        int q=d/a[i],r=d%a[i];
        if(q!=0){
            for(int j=1;j<=q;j++){
                a[i+j]=a[i];
            }
            dem+=q;
        }
        if(r!=0){
            a[dem+1]=r;
            ++dem;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    init();
    while(!final){
        for(int i=1;i<=dem;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}