#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int dx[8]={-2,-2,-1,1,2,2,1,-1};
const int dy[8]={-1,1,2,2,1,-1,-2,-2};
void BFS(pair<char,int> a,pair<char,int> b){
    vector<vector<bool>> vst(8,vector<bool>(8,0));
    queue<pair<pair<int,int>,int>> q;
    q.push({{(a.first-'a'),a.second},0});
    vst[a.first-'a'][a.second]=1;
    while(!q.empty()){
        pair<pair<int,int>,int> top=q.front();q.pop();
        int i=top.first.first;
        int j=top.first.second;
        if(i==(b.first-'a') && j==(b.second)){
            cout << top.second;
            return;
        }
        for(int k=0;k<8;k++){
            int i1=i+dx[k];
            int j1=j+dy[k];
            if(i1>=0 && i1<8 && j1>=0 && j1<8 && !vst[i1][j1]){
                vst[i1][j1]=1;
                q.push({{i1,j1},top.second+1});
            }
        }
    }
}
void testCase(){
    pair<char,int> a,b;
    cin>>a.first>>a.second>>b.first>>b.second;
    a.second=8-a.second;
    b.second=8-b.second;
    BFS(a,b);
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