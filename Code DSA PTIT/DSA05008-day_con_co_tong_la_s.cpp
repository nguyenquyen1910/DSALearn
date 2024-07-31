#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int n,s;cin>>n>>s;
    int a[n];
    for(int &x : a) cin>>x;
    vector<bool> F(s+1,false);
    F[0]=true;
    for(int i=0;i<n;i++){
        for(int j=s;j>=a[i];j--){
            if(F[j-a[i]]){
                F[j]=true;
            }
        }
    }
    if(F[s]) cout << "YES";
    else cout << "NO";
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