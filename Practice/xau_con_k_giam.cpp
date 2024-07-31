#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;cin>>s;
    vector<int> dp(s.size()+5,1);
    for(int i=0;i<s.size();i++){
        for(int j=0;j<i;j++){
            if(s[i]>=s[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    cout << *max_element(dp.begin(),dp.end());
    return 0;
}