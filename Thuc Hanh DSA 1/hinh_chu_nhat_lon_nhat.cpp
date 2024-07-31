#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testCase(){
    int n,m;cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int h[n][m];
    memset(h,0,sizeof(h));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0) h[i][j]=a[i][j];
            else{
                if(a[i][j]==1) h[i][j]=h[i-1][j]+1;
                else h[i][j]=0;
            }
        }
    }
    int ans=0;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int l[m],r[m];
        stack<int> st1,st2;
        for(int j=m-1;j>=0;j--){
            while(!st1.empty() && h[i][j]<=h[i][st1.top()]) st1.pop();
            if(st1.empty()) r[j]=m-1;
            else r[j]=st1.top()-1;
            st1.push(j);
        }
        for(int j=0;j<m;j++){
            while(!st2.empty() && h[i][j]<=h[i][st2.top()]) st2.pop();
            if(st2.empty()) l[j]=0;
            else l[j]=st2.top()+1;
            st2.push(j);
        }
        int res=0;
        for(int j=0;j<m;j++){
            res=max(res,(r[j]-l[j]+1)*h[i][j]);
            v.push_back({h[i][j],r[j]-l[j]+1});
        }
        ans=max(ans,res);
    }
    pair<int,int> res;
    int chenhlech=INT_MAX;
    for(auto x : v){
        int s=x.first*x.second;
        if(s==ans && abs(x.first-x.second)<chenhlech){
            chenhlech=abs(x.first-x.second);
            res=x;
        }
    }
    cout << res.first << " " << res.second;
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