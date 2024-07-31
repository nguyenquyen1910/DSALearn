#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[101][101],ans;
int cot[101],xuoi[101],nguoc[101];
void nhap(){
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>a[i][j];
        }
    }
}
void Try(int i,int sum){
    for(int j=1;j<=8;j++){
        if(!cot[j] && !xuoi[i+j-1] && !nguoc[i-j+8]){
            sum+=a[i][j];
            cot[j]=xuoi[i+j-1]=nguoc[i-j+8]=1;
            if(i==8){
                ans=max(ans,sum);
            }
            else Try(i+1,sum);
            sum-=a[i][j];
            cot[j]=xuoi[i+j-1]=nguoc[i-j+8]=0;
        }
    }
}
void solve(){
    ans=0;
    nhap();
    Try(1,0);
    cout << ans << endl; 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}