//Cho một mảng tam giác, trả về tổng đường dẫn tối thiểu từ trên xuống dưới.
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;cin>>n;
    vector<vector<int>> a(n+1,vector<int>(n+1));
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<n;i++){
        a[i][0]+=a[i-1][0];
        a[i][i]+=a[i-1][i-1];
        for(int j=1;j<i;j++){
            a[i][j]+=min(a[i-1][j],a[i-1][j-1]);
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int res=INT_MAX;
    for(int i=0;i<n;i++){
        res=min(res,a[n-1][i]);
    }
    cout << res;
    return 0;
}