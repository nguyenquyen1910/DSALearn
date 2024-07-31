#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string mul(string s1,string s2){
    int len1=s1.size(),len2=s2.size();
    int len=len1+len2;
    vector<int> a,b;
    for(int i=0;i<len1;i++) a.push_back(s1[i]-'0');
    for(int i=0;i<len2;i++) b.push_back(s2[i]-'0');
    vector<vector<int>> res(len2);
    int idx=0;
    for(int i=len2-1;i>=0;i--){
        int tmp=0;
        while(tmp<idx){
            res[idx].push_back(0); 
            ++tmp;
        }
        int carry=0,num=0;
        for(int j=len1-1;j>=0;j--){
            num=a[j]*b[i]+carry;
            res[idx].push_back(num%10);
            carry=num/10;
        }
        if(carry>0) res[idx].push_back(carry);
        while(res[idx].size()<len) res[idx].push_back(0);
        reverse(res[idx].begin(),res[idx].end());
        ++idx;
    }
    int carry=0;
    string ans="";
    for(int j=res[0].size()-1;j>=0;j--){
        int num=carry;
        for(int i=0;i<res.size();i++){
            num+=res[i][j];
        }
        ans=char(num%10+'0')+ans;
        carry=num/10;
    }
    if(carry>0) ans=char(carry+'0')+ans;
    while(ans[0]=='0') ans.erase(ans.begin());
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s1,s2;cin>>s1>>s2;
    cout << mul(s1,s2);
    return 0;
}