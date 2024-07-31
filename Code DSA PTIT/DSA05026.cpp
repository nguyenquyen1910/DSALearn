#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    int c,n;cin>>c>>n;
    int a[n];int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    vector<bool> F(c+1,false);
    F[0]=true;
    for(int i=0;i<n;i++){
        for(int j=c;j>=a[i];j--){
            if(F[j-a[i]]){
                F[j]=true;
            }
        }
    }
    for(int i=c;i>=0;i--){
        if(F[i]){
            cout << i;
            return;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    testcase();
    return 0;
}