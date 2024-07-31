#include<bits/stdc++.h>
using namespace std;
using ll = long long;
char a[100];
int n,k;vector<string> v;
bool check(char a[],int n,int k){
    int cnt=0,res=0;
    for(int i=1;i<=n;i++){
        if(a[i]=='A'){
            ++cnt;
        }
        else{
            cnt=0;
        }
        if(cnt>k)
            return false;
        if(cnt==k)
            ++res;
    }
    return res==1;
}
void solve(char a[],int n){
    for(int i=1;i<=n;i++){
        a[i]='A';
    }
    while(1){
        string tmp="";
        if(check(a,n,k)){
            for(int i=1;i<=n;i++){
                tmp+=a[i];
            }
            v.push_back(tmp);
        }
        int i=n;
        while(i>=1 && a[i]=='B'){
            a[i]='A';
            --i;
        }
        if(i==0) return;
        a[i]='B';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>k;
    solve(a,n);
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
}