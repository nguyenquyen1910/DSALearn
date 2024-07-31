#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string a[101];
string add(string a,string b){
    string res="";
    while(a.size()<b.size()) a="0"+a;
    while(b.size()<a.size()) b="0"+b;
    int carry=0;
    for(int i=a.size()-1;i>=0;i--){
        int tmp=a[i]-'0'+b[i]-'0'+carry;
        carry=tmp/10;
        tmp%=10;
        res=char(tmp+'0')+res;
    }
    if(carry) res=char(carry+'0')+res;
    return res;
}
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
void init(){
    a[0]="1";
    a[1]="1";
    for(int i=2;i<=100;i++){
        string tmp="";
        for(int j=0;j<i;j++){
            tmp=add(tmp,mul(a[j],a[i-j-1]));
        }
        a[i]=tmp;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin>>t;
    init();
    while(t--){
        int n;cin>>n;
        cout << a[n];
        cout << endl;
    }
    return 0;
}