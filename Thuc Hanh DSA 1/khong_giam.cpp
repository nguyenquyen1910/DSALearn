#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k;
int a[1001];
void Try(int i){
    for(int j=a[i-1];j<=n;j++){
        a[i]=j;
        if(i==k){
            for(int i=1;i<=k;i++){
                cout << a[i] << " ";
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
    a[0]=1;
    cin>>n>>k;
    Try(1);
    return 0;
}