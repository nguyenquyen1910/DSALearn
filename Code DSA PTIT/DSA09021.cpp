#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<set<int>> v(n+5);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int tmp;cin>>tmp;
            if(tmp!=0){
                v[j].insert(i);
                v[i].insert(j);
            }
        }
    }
    for(auto x : v){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}