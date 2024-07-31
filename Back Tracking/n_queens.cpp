#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100];
bool cot[100],xuoi[100],nguoc[100];
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j]==false && xuoi[i-j+n]==false && nguoc[i+j-1]==false){
            a[i]=j;
            cot[j]=true;
            xuoi[i-j+n]=true;
            nguoc[i+j-1]=true;
            if(i==n){
                for(int i=1;i<=n;i++){
                    cout << "Con hau nam o hang " << i << " cot " << a[i] << endl; 
                }
                cout << endl;
            }
            else{
                Try(i+1);
            }
            cot[j]=false;
            xuoi[i-j+n]=false;
            nguoc[i+j-1]=false;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(cot,false,sizeof(cot));
    memset(xuoi,false,sizeof(xuoi));
    memset(nguoc,false,sizeof(nguoc));
    cin>>n;
    Try(1);
    return 0;
}