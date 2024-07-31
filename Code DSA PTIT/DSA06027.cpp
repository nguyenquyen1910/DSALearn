#include<bits/stdc++.h>
using namespace std;
void unlinear_sort(vector<int> a,vector<vector<int>> v,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
        v.push_back(a);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout << "Buoc " << i+1 << ": ";
        for(auto x : v[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        vector<vector<int>> v;
        for(int &x : a) cin>>x;
        unlinear_sort(a,v,n);
    }
    return 0;
}