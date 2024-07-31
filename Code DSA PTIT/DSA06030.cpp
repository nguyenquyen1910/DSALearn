#include<bits/stdc++.h>
using namespace std;
void unbubble_sort(vector<int> a,vector<vector<int>> v,int n){
    for(int i=1;i<n;i++){
        int check=1;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                check=0;
            }
        }
        if(check){
            break; 
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
        unbubble_sort(a,v,n);
    }
    return 0;
}