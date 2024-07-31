/*Bài toàn tìm 2 số trong mảng sao cho tổng bình phương của chúng bằng một số có trong mảng*/
#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n){
    for(int i=n-1;i>=2;i--){
        int l=0,r=i-1;
        while(l<r){
            if(a[l]+a[r]==a[i]){
                return 1;
            }
            else if(a[l]+a[r]<a[i]){
                ++l;
            }
            else --r;
        }
    }
    return 0;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]*=a[i];
    }
    sort(a,a+n);
    if(check(a,n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}