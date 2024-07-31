#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int A[1001][1001];
bool vst[1001][1001];
int minSteps(int A[][1001],int N,int M) {
   vector<vector<int>> dp(N, vector<int>(M, INT_MAX));
    dp[0][0] = 0;
    queue<pair<int, int>> q;
    q.push({0, 0});
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        vector<pair<int, int>> directions = {{1, 0}, {0, 1}, {1, 1}};
        for (auto [dx, dy] : directions) {
            int nx = x + dx;
            int ny = y + dy;
            if (nx < N && ny < M && dp[nx][ny] == INT_MAX) {
                dp[nx][ny] = dp[x][y] + abs(A[nx][ny] - A[x][y]);
                q.push({nx, ny});
            }
        }
    }
    return dp[N-1][M-1];
}
void testCase(){
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    cout << minSteps(A,n,m);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testCase();
        cout << endl;
    }
    return 0;
}