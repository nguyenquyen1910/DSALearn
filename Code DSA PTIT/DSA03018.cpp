#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n;cin>>n;
    int limit=n/7;
    int c4=0,c7=0,ok=0;
    for(int i=limit;i>=0;i--){
        if((n-7*i)%4==0){
            c7=i;
            c4=(n-7*i)/4;
            ok=1;
            break;
        }
    }
    if(ok){
        for(int i=0;i<c4;i++){
            cout << 4;
        }
        for(int i=0;i<c7;i++){
            cout << 7;
        }
    }
    else cout << -1;
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