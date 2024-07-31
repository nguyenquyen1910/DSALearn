#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    vector<int> F(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j])
                F[i]=max(F[i],F[j]+a[i]);
        }
    }
    cout << *max_element(F.begin(),F.end());
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}