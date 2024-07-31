#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    int a[n];
    for(int &x : a) cin>>x;
    vector<int> F(1000,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                F[i]=max(F[i],F[j]+1);
            }
        }
    }
    cout << *max_element(F.begin(),F.end());
    return 0;
}