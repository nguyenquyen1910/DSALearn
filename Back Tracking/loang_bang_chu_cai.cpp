#include<bits/stdc++.h>
using namespace std;
using ll = long long;
char a[100][100];
string s;
int n,m;
bool check(int i,int j,int n,int m,int k){
    if(k==s.size()) return true;
    if(i<0 || i>=n || j<0 || j>=m || a[i][j]!=s[k]) return false;
    char ch=a[i][j];
    a[i][j]='#';
    bool op1=check(i-1,j,n,m,k+1);
    bool op2=check(i+1,j,n,m,k+1);
    bool op3=check(i,j-1,n,m,k+1);
    bool op4=check(i,j+1,n,m,k+1);
    a[i][j]=ch;
    return op1||op2||op3||op4;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>s;
    int k=s.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(check(i,j,n,m,0)){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}