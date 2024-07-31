#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100],dem;
void sinh(int a[],int n){
    dem=1;
    a[1]=n;
    while(1){
        cout << "(";
        for(int i=1;i<dem;i++){
            cout << a[i] << " ";
        }
        cout << a[dem] << ") ";
        int i=dem;
        while(i>=1 && a[i]==1) --i;
        if(i==0) return;
        else{
            int d=dem-i+1;
            a[i]--;
            dem=i;
            int q=d/a[i],r=d%a[i];
            if(q){
                for(int j=1;j<=q;j++){
                    a[i+j]=a[i];
                }
                dem+=q;
            }
            if(r){
                a[dem+1]=r;
                ++dem;
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
        cin>>n;
        sinh(a,n);
        cout << endl;
    }
    return 0;
}