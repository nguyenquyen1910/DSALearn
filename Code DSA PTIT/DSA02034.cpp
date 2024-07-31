#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100];
int used[100];
bool check(int a[],int n){
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i+1])==1)
            return false;
    }
    return true;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            used[j]=1;
            a[i]=j;
            if(i==n){
                if(check(a,n)){
                    for(int i=1;i<=n;i++){
                        cout << a[i];
                    }
                    cout << endl;
                }
            }
            else Try(i+1);
            used[j]=0;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        cin>>n;
        Try(1);
    }
    return 0;
}