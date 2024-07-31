#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,a[100][100];
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[1][i];
    }
    int cot=n-1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=cot;j++){
            a[i][j]=a[i-1][j]+a[i-1][j+1];
        }
        cot--;
    }
    cot=n;
    vector<vector<int>> res;
    for(int i=1;i<=n;i++){
        vector<int> tmp;
        for(int j=1;j<=cot;j++){
            tmp.push_back(a[i][j]);
        }
        cot--;
        res.push_back(tmp);
    }
    for(int i=res.size()-1;i>=0;i--){
        for(int j=0;j<res[i].size();j++){
            if(j==0) cout << "[";
            cout << res[i][j];
            if(j==res[i].size()-1) cout << "] ";
            if(j<res[i].size()-1) cout << " ";
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}