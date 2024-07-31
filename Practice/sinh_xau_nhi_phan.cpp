#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[10],n;
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << endl;
        }
        else Try(i+1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    Try(1);
    return 0;
}