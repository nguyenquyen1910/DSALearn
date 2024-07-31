#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,x;cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s;getline(cin,s);
        stringstream ss(s);
        while(ss >> s){
            x=stoi(s);
            a[x][i]=a[i][x]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}