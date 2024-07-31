//Cho 1 bieu do, tinh luong nuoc chua duoc sau con mua
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> left(n);
    vector<int> right(n);
    left[0]=a[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],a[i]);
    }
    right[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],a[i]);
    }
    int res=0;
    for(int i=0;i<n;i++){
        res+=min(left[i],right[i])-a[i];
    }
    cout << res;
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