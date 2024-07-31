#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100];
bool vst[1000];
bool check(int *a,int n){
    int sum=0;
    for(int i=1;i<n;i++){
        sum+=(a[i]-a[i+1]);
    }
    return sum>0;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!vst[j]){
            vst[j]=1;
            a[i]=j;
            if(i==n){
                if(check(a,n)){
                    for(int i=1;i<=n;i++){
                        cout << a[i] << " ";
                    }
                    cout << endl;
                }
            }
            else Try(i+1);
            vst[j]=0;
        }
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