#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> trai(vector<int> a){
    vector<int> res(6);
    res[0]=a[0];res[1]=a[4];res[2]=a[1];
    res[3]=a[3];res[4]=a[5];res[5]=a[2];
    return res;
}
vector<int> phai(vector<int> a){
    vector<int> res(6);
    res[0]=a[3];res[1]=a[0];res[2]=a[2];
    res[3]=a[4];res[4]=a[1];res[5]=a[5];
    return res;
}
bool check(vector<int> a,vector<int> b){
    for(int i=0;i<6;i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}
int solution(vector<int> a,vector<int> b){
    queue<pair<vector<int>,int>> q;
    set<vector<int>> se;
    se.insert(a);
    q.push({a,0});
    while(!q.empty()){
        pair<vector<int>,int> top=q.front();q.pop();
        if(check(top.first,b)){
            return top.second;
        }
        vector<int> left=trai(top.first);
        if(se.count(left)==0){
            q.push({left,top.second+1});
            se.insert(left);
        }
        vector<int> right=phai(top.first);
        if(se.count(right)==0){
            q.push({right,top.second+1});
            se.insert(right);
        }
    }
    return -1;
}
void testCase(){
    vector<int> a(6);vector<int> b(6);
    for(int i=0;i<6;i++) cin>>a[i];
    for(int i=0;i<6;i++) cin>>b[i];
    cout << solution(a,b);
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