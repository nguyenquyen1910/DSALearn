#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int s,d;cin>>s>>d;
    if(s>9*d){
        cout << -1;
        return;
    }
    int a[d]={1};--s;
    for(int i=d-1;i>=0;i--){
        int so=min(s,9-a[i]);
        a[i]+=so;
        s-=so;
    }
    for(int i=0;i<d;i++){
        cout << a[i];
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}