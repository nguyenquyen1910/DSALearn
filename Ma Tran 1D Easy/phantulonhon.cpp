//Phần tử lớn hơn các phần tử đứng trước nó
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    int max_tmp=a[0];
    cout << a[0] << " ";
    for(int i=1;i<n;i++){
        if(a[i]>max_tmp){
            cout << a[i] << " ";
            max_tmp=a[i];
        }
    }
    return 0;
}