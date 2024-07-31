#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dp[105][105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; 
    cin >> n;
    int a[105][105];
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    dp[1][1] = a[1][1];
    for(int j = 2; j <= n; j++) {
        dp[1][j] = (dp[1][j-1] << 1) + a[1][j];
    }
    for(int i = 2; i <= n; i++) {
        dp[i][1] = (dp[i-1][1] << 1) + a[i][1];
    }
    for(int i = 2; i <= n; i++) {
        for(int j = 2; j <= n; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) << 1 | a[i][j];
        }
    }
    cout << hex << dp[n][n] << endl;
    return 0;
}
