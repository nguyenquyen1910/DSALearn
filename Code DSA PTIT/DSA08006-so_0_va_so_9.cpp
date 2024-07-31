#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(string s,int n){
    int x=0;
    for(int i=0;i<s.size();i++){
        x=(x*10+(s[i]-'0'))%n;
    }
    return x==0;
}
void testCase(){
    int n;cin>>n;
    queue<string> q;
    q.push("9");
    while(1){
        string top=q.front();q.pop();
        if(check(top,n)){
            cout << top;
            return;
        }
        q.push(top+"0");
        q.push(top+"9");
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