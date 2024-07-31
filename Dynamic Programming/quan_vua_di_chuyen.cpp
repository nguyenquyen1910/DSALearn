#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int dx[8]={-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8]={-1, 0, 1, -1, 1, -1, 0, 1};
void testCase(){
    pair<int,int> s,t;cin>>s.first>>s.second>>t.first>>t.second;
    bool vst[8][8]={};
    queue<pair<pair<int,int>,int>> q;
    q.push({{s.first,s.second},0});
    vst[s.first][s.second]=1;
    while(!q.empty()){
        pair<pair<int,int>,int> top=q.front();q.pop();
        int i=top.first.first;
        int j=top.first.second;
        if(i==t.first && j==t.second){
            cout << top.second;
            return;
        }
        for(int k=0;k<8;k++){
            int i1=i+dx[k];
            int j1=j+dy[k];
            if(i1>=1 && i1<=8 && j1>=1 && j1<=8 && !vst[i1][j1]){
                vst[i1][j1]=1;
                q.push({{i1,j1},top.second+1});
            }
        }
    }
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