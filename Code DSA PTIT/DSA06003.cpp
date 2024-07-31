#include<bits/stdc++.h>
using namespace std;
int selection_sort(int a[],int b[],int n){
    int res=0;
    int min_pos;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            min_pos=i;
            for(int j=i+1;j<n;j++){
                if(b[i]==a[j]){
                    min_pos=j;
                    break;
                }
            }
            swap(a[i],a[min_pos]);
            ++res;
        } 
    }
    return res;
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
        sort(b,b+n);
        cout << selection_sort(a,b,n) << endl;
    }
    return 0;
}