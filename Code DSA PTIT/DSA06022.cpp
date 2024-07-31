#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int min_second=INT_MAX;
        for(int &x : a) cin>>x;
        for(int x : a){
            if(x<min_second && x>*min_element(a,a+n)){
                min_second=x;
            }
        }
        if(min_second==INT_MAX){
            cout << -1 << endl;
        }
        else cout << *min_element(a,a+n) << " " << min_second << endl;
    }
    return 0;
}