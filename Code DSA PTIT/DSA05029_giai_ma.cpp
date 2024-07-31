#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void testcase(){
    string s;cin>>s;
    int n=s.size();
    if(s.size()==0 || s[0]=='0'){
        cout << 0;
        return;
    }
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        int odig=s[i-1]-'0';
        int tdig=stoi(s.substr(i-2,2));
        if(odig!=0){
            dp[i]+=dp[i-1];
        }
        if(10<=tdig && tdig<=26){
            dp[i]+=dp[i-2];
        }
    }
    cout << dp[n];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    while(t--){
        testcase();
        cout << endl;
    }
    return 0;
}