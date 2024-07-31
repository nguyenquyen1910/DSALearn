#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n;cin>>n;
    char a[101][101];
    bool vst[101][101];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>a[i][j];
    }
    int s,t,c,d;cin>>s>>t>>c>>d;
    memset(vst,0,sizeof(vst));
    queue<pair<pair<int,int>,int>> q;
    q.push({{s,t},0});
    vst[s][t]=1;
    while(!q.empty()){
        auto [x,y]=q.front();q.pop();
        if(x.first==c && x.second==d){
            cout << y;
            return;
        }
        for(int i=x.first+1;i<n;i++){
            if(a[i][x.second]!='X' && !vst[i][x.second]){
                q.push({{i,x.second},y+1});
                vst[i][x.second]=1;
            }
            else break;
        }
        for(int i=x.first-1;i>=0;i--){
            if(a[i][x.second]!='X' && !vst[i][x.second]){
                q.push({{i,x.second},y+1});
                vst[i][x.second]=1;
            }
            else break;
        }
        for(int j=x.second+1;j<n;j++){
            if(a[x.first][j]!='X' && !vst[x.first][j]){
                q.push({{x.first,j},y+1});
                vst[x.first][j]=1;
            }
            else break;
        }
        for(int j=x.second-1;j>=0;j--){
            if(a[x.first][j]!='X' && !vst[x.first][j]){
                q.push({{x.first,j},y+1});
                vst[x.first][j]=1;
            }
            else break;
        }
    }
    cout << -1;
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