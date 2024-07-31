#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,cnt;
int cot[100],xuoi[100],nguoc[100];
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j]==0 && xuoi[i+j-1]==0 && nguoc[i-j+n]==0){
            cot[j]=1;
            xuoi[i+j-1]=1;
            nguoc[i-j+n]=1;
            if(i==n) ++cnt;
            else Try(i+1);
            cot[j]=0;
            xuoi[i+j-1]=0;
            nguoc[i-j+n]=0;
        }
    }
}
void testcase(){
    cin>>n;
    cnt=0;
    Try(1);
    cout << cnt << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
    }
    return 0;
}