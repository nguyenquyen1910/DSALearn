#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    do{
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }while(next_permutation(a,a+n));
    return 0;
}