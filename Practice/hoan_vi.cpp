#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[15],n;
bool used[100];
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            used[j]=1;
            a[i]=j;
            if(i==n){
                for(int i=1;i<=n;i++){
                    cout << a[i];
                }
                cout << endl;
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
    cin>>n;
    Try(1);
    return 0;
}