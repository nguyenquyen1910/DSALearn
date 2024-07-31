#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool checkPrime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return x>1;
}
int to_int(string s){
    int x=0;
    for(int i=0;i<s.size();i++){
        x=x*10+(s[i]-'0');
    }
    return x;
}
void testCase(){
    string s,t;cin>>s>>t;
    bool vst[10000]={};
    queue<pair<string,int>> q;
    q.push({s,0});
    while(!q.empty()){
        pair<string,int> top=q.front();q.pop();
        if(top.first==t){
            cout << top.second;
            return;
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<=9;j++){
                if((i==0 && j==0) || j==(s[i]-'0')) continue;
                string tmp=top.first;
                tmp[i]=j+'0';
                int num=to_int(tmp);
                if(checkPrime(num) && !vst[num]){
                    q.push({tmp,top.second+1});
                    vst[num]=1;
                }
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