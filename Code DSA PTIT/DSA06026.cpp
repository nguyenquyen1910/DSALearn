#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n){
    int m=1;
    for(int i=0;i<n-1;i++){
        int cnt=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                cnt=1;
            }
        }
        if(cnt==0){
            break;
        }
        cout << "Buoc " << m++ << ": ";
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
    bubblesort(a,n);
    return 0;
}