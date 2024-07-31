#include<bits/stdc++.h>
using namespace std;
void uninsertion_sort(vector<int> a,vector<vector<int>> v,int n){
    int key;
    for(int i=0;i<n;i++){
        key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;
        vector<int> tmp(a.begin(),a.begin()+i+1);
        v.push_back(tmp);
    }
    for(int i=v.size()-1;i>=0;i--){
        cout << "Buoc " << i << ": ";
        for(auto x : v[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;cin>>n;
    vector<int> a(n);
    vector<vector<int>> v;
    for(int &x : a) cin>>x;
    uninsertion_sort(a,v,n);
    return 0;
}