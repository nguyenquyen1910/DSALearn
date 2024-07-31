#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n],b[m];
        set<int> se1,se2,se;
        for(int i=0;i<n;i++){
            cin>>a[i];
            se1.insert(a[i]);
            se.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            se.insert(b[i]);
            se2.insert(b[i]);
        }
        for(auto x : se){
            cout << x << " ";
        }
        cout << endl;
        for(auto x : se1){
            if(se2.count(x)!=0){
                cout << x << " "; 
            }
        }
        cout << endl;
    }
    return 0;
}
