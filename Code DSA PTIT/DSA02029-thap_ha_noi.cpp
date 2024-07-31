#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void Try(int n,char a,char b,char c){
    if(n==1) {
        cout << a << " -> " << c << endl;
        return; 
    }
    Try(n-1,a,c,b);
    Try(1,a,b,c);
    Try(n-1,b,a,c);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    Try(n,'A','B','C');
    return 0;
}