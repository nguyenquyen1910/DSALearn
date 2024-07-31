#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
    int key;
    cout << "Buoc 0: " << a[0] << endl;
    for(int i=1;i<n;i++){
        key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;
        cout << "Buoc " << i << ": ";
        for(int k=0;k<=i;k++){
            cout << a[k] << " ";
        }
        cout << endl;
    } 
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    insertion_sort(a,n);
    return 0;
}