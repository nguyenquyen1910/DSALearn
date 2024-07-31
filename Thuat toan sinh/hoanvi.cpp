#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100],final=0;
//Ham khoi tao
void init(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
//Ham sinh
void sinh(){
    int i=n;
    while(i>=1 && a[i]>a[i+1]){
        --i;
    }
    if(i==0){
        final=1;//Cau hinh cuoi cung
    }
    else{
        int j=n;//Tim phan tu dau tien lon hon a[i]
        while(a[j]<a[i]){
            --j;
        }
        swap(a[i],a[j]);//Doi cho va lat nguoc mang tu i -> n
        reverse(a+i+1,a+n+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    init();
    while(!final){
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}