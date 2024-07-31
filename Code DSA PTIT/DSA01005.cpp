#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
int a[100];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            a[i]=i;
        }
        do{
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << " ";
        }while(next_permutation(a+1,a+n+1));
        cout << endl;
    }
    return 0;
}