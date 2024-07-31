#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,b[200];
vector<int> a;
char c;
bool is1or5(int c) {
    return (c != 1 && c != 5);
}
void solve() {
    for(int i=0;i<a.size();++i){
        if(a[i]==1 || a[i]==5) {
            if(i>0 && i<a.size()-1 && is1or5(a[i-1]) && is1or5(a[i+1]))
               return;
        }
    }
    for(int i=0;i<a.size();i++){
        printf("%c",a[i]+64);
    }
    printf("\n");
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!b[j]){
            b[j]=1;
            a.push_back(j);
            if(a.size()==n){
                solve();
            }
            else Try(i+1);
            b[j]=0;
            a.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>c;
    n=(int)(c-64);
    Try(1);
    return 0;
}