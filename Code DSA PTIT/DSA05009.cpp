#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,sum,a[105];
bool ok;
void Try(int i,int s){
    if(ok) return;
    if(s==sum/2){
        ok=1;
        return;
    }
    if(s>sum/2) return;
    for(int j=i;j<=n;j++) Try(j+1,s+a[j]);
}
void testcase(){
    ok=false;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==1){
        cout << "NO";
        return;
    }
    else{
        Try(1,0);
        if(ok) cout << "YES";
        else cout << "NO";
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