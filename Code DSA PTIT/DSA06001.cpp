#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        sort(b,b+n,cmp);
        int k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout << b[k] << " ";
                k;
            }
            else{
                cout << a[k] << " ";
                ++k;
            }
        }
        cout << endl;
    }
    return 0;
}