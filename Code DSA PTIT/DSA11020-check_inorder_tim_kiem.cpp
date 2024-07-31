#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool checkInorder(int *a,int n){
    for(int i=0;i<n-1;i++){
        if(a[i+1]<=a[i]) return false;
    }
    return true;
}
void testCase(){
    int n;cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout << checkInorder(a,n);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}