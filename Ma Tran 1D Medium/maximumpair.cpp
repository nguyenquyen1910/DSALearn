/*Tìm tổng trị đối lớn nhất trong mảng*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout << max(abs(a[0])+abs(a[1]),abs(a[n-2])+abs(a[n-1]));
    return 0;
}