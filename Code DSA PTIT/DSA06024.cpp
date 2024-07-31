#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    int idx;
    for(int i=0;i<n-1;i++){
        idx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[idx]){
                idx=j;
            }
        }
        cout << "Buoc " << i+1 << ": ";
        swap(a[i],a[idx]);
        for(int j=0;j<n;j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    selection_sort(a,n);
    return 0;
}