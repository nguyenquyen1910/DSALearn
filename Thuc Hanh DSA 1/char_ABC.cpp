#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
vector<string> res;
bool cmp(string a,string b){
    if(a.size()!=b.size())
        return a.size()<b.size();
    return a<b;
}
void Try(string s,int cntA,int cntB,int cntC){
    if(s.size()<=n){
        if(cntA && cntB && cntC && cntA<=cntB && cntB<=cntC){
            res.push_back(s);
        }
        if(s.size()==n) return;
    }
    Try(s+'A',cntA+1,cntB,cntC);
    Try(s+'B',cntA,cntB+1,cntC);
    Try(s+'C',cntA,cntB,cntC+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    Try("",0,0,0);
    sort(res.begin(),res.end(),cmp);
    for(auto x : res){
        cout << x << endl;
    }
    return 0;
}