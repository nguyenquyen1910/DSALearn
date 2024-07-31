#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int check(vector<vector<int>> &dp,int i,int j,string &s){
    if(i==j) return dp[i][j]=1;
    if(j-i==1){
        if(s[i]==s[j]) return dp[i][j]=1;
        else return dp[i][j]=0;
    }
    if(s[i]==s[j] && dp[i+1][j-1]==1){
        return dp[i][j]=1;
    }
    else return dp[i][j]=0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;cin>>s;
    if(s.size()<=1){
        cout << s;
    }
    int n=s.size(),ans=0,l;
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int k=0;k<n;k++){
        for(int i=0,j=k;j<n;i++,j++){
            check(dp,i,j,s);
            if(dp[i][j]==true){
                if(j-i+1>ans){
                    l=i;
                    ans=j-i+1;
                }
            }
        }   
    }
    cout << s.substr(l,ans);
    return 0;
}